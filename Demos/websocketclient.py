import asyncio
import websockets


async def hello():
    uri = "ws://localhost:8765"
    async with websockets.connect(uri) as websocket:
        name = input("Name: ")

        await websocket.send(name)
        print(f'CLient sent: {name}')

        greeting = await websocket.recv()
        print(f'Client received: {greeting}')

if __name__ == '__main__':
    asyncio.run(hello())
