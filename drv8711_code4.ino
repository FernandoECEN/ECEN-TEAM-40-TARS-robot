#include <SPI.h>
#include <msp430f5529.h>
#include "HardwareSerial.h"

//initialize the code
void Initialize();

#define CS1 BIT1
#define CS2 BIT2
#define STEP BIT2
#define SLEEPn BIT6
#define MTR_DIR BIT1
#define RESET BIT7
#define MTR_STALL BIT0
#define FAULT BIT2
#define LED RED_LED

int i,j;
char UART_DATA;

void setup() {
  // put your setup code here, to run once:
  P8DIR |= CS1;//P8.1 CS1
  P8DIR |= CS2;//P8.2 CS2
  P4DIR |= (STEP|MTR_DIR); // P4.2 STEP, P4.1 DIR
  P2DIR |= (RESET|MTR_STALL|FAULT); //
  P6DIR |= SLEEPn;

  pinMode(P7_4, OUTPUT);
  digitalWrite(P2_2, HIGH); //FAULT input
  digitalWrite(P2_0, HIGH); //STALL input
  digitalWrite(P6_6, HIGH); //SLEEPn = high
  digitalWrite(P4_1, HIGH); //DIRECTION = high
  digitalWrite(P2_7, LOW);  //RESET = low

  Serial1.begin(9600); // Initialize UART
  SPI.begin();// Initialize SPI
  SPI.setClockDivider(2); // CLK speed ~ 

  delay(1);
  Initialize();

  digitalWrite(P7_4, HIGH);
  delayMicroseconds(10);
  digitalWrite(P7_4, LOW);
  
  

}

void loop() {
  // put your main code here, to run repeatedly: 
  if (Serial1.available() > 0) {
    UART_DATA=Serial1.read();
    if (UART_DATA == 'F'){
      digitalWrite(LED, LOW);
      delay(1000);
      Initialize();
      WriteSPI1(0x0C, 0x07);
      WriteSPI2(0x0C, 0x05);
      for (i = 0; i < 10000000; i++) {
        digitalWrite(P4_2, LOW);
        delayMicroseconds(100);
        digitalWrite(P4_2, HIGH);
        delayMicroseconds(10000);
        if (Serial1.available()>0){
          UART_DATA=Serial1.read();
          if(UART_DATA!='F'){
            break;
          }
        }
      }
    //WriteSPI(0x0C, 0x04);  // Stop Motion
    }
    else if (UART_DATA == 'R'){
      digitalWrite(LED, HIGH);
      delay(1000);
      Initialize();
      WriteSPI1(0x0C, 0x05);
      WriteSPI2(0x0C, 0x07);
      for (i = 0; i < 10000000; i++) {
        digitalWrite(P4_2, LOW);
        delayMicroseconds(100);
        digitalWrite(P4_2, HIGH);
        delayMicroseconds(10000);
        if (Serial1.available()>0){
          UART_DATA=Serial1.read();
          if(UART_DATA!='R'){
            break;
          }
        }
      }
    //WriteSPI(0x0C, 0x04);  // Stop Motion
    }
    else if (UART_DATA == 'S'){
        WriteSPI1(0x0C, 0x04);
        WriteSPI2(0x0C, 0x04);
        
    }
  }
  
}

unsigned int WriteSPI1(unsigned char dataHi, unsigned char dataLo) {
    unsigned int readData = 0;

    digitalWrite(P8_1, HIGH);  // Assert Chip Select

    UCB0TXBUF = dataHi;        // Send High Byte
    while (UCB0STAT & BUSY);
    readData |= (UCB0RXBUF << 8);

    UCB0TXBUF = dataLo;        // Send Low Byte
    while (UCB0STAT & BUSY);
    readData |= UCB0RXBUF;

    digitalWrite(P8_1, LOW);   // Deassert Chip Select
    readData &= 0x7FFF;

    return readData;
}

unsigned int WriteSPI2(unsigned char dataHi, unsigned char dataLo) {
    unsigned int readData = 0;

    digitalWrite(P8_2, HIGH);  // Assert Chip Select

    UCB0TXBUF = dataHi;        // Send High Byte
    while (UCB0STAT & BUSY);
    readData |= (UCB0RXBUF << 8);

    UCB0TXBUF = dataLo;        // Send Low Byte
    while (UCB0STAT & BUSY);
    readData |= UCB0RXBUF;

    digitalWrite(P8_2, LOW);   // Deassert Chip Select
    readData &= 0x7FFF;

    return readData;
}

void Initialize() {
    WriteSPI1(0x0C, 0x05);  // CTRL Register
    WriteSPI1(0x13, 0x84);  // TORQUE Register
    WriteSPI1(0x20, 0xF0);  // OFF Register
    WriteSPI1(0x31, 0xF0);  // BLANK Register
    WriteSPI1(0x41, 0x10);  // DECAY Register
    WriteSPI1(0x53, 0x40);  // STALL Register
    WriteSPI1(0x60, 0x0F);  // DRIVE Register
    WriteSPI1(0x70, 0x00);  // STATUS Register

    WriteSPI2(0x0C, 0x07);  // CTRL Register
    WriteSPI2(0x13, 0x84);  // TORQUE Register
    WriteSPI2(0x20, 0xF0);  // OFF Register
    WriteSPI2(0x31, 0xF0);  // BLANK Register
    WriteSPI2(0x41, 0x10);  // DECAY Register
    WriteSPI2(0x53, 0x40);  // STALL Register
    WriteSPI2(0x60, 0x0F);  // DRIVE Register
    WriteSPI2(0x70, 0x00);  // STATUS Register
}
