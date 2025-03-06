import smbus
import time

# I2C bus number (1 for Jetson Nano)
I2C_BUS = 1

# I2C device address
DEVICE_ADDRESS = 0x40  # Change this to your device's I2C address

# Initialize the I2C bus
bus = smbus.SMBus(I2C_BUS)

# Function to write data to the I2C device
def write_data(register, data):
    try:
        bus.write_byte_data(DEVICE_ADDRESS, register, data)
        print(f"Data {data} written to register {register:#04x}")
    except Exception as e:
        print(f"Error writing to device: {e}")

# Function to read data from the I2C device
def read_data(register):
    try:
        data = bus.read_byte_data(DEVICE_ADDRESS, register)
        print(f"Data read from register {register:#04x}: {data}")
        return data
    except Exception as e:
        print(f"Error reading from device: {e}")
        return None

# Example usage: Writing data to a device register
write_data(0x100, 0x08)  # Write 0x10 to register 0x01

# Example usage: Reading data from a device register
data = read_data(0x08)  # Read data from register 0x01

# You can use time.sleep() to delay communication if needed
time.sleep(1)

