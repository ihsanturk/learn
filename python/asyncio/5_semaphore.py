#!/usr/bin/env python3
import asyncio
from random import randint

company_len = 5 # 408

sem = asyncio.Semaphore(company_len)

async def get_message():
	message = randint(0, 1_000)
	print(f'{message} got')
	return message

async def process_message(message):
	await asyncio.sleep(randint(1, 5))
	print(f'{message} processed')
	return message

async def deal_with_message(message):
	await asyncio.sleep(randint(1, 5))
	print(f'{message} dealt')

async def utilize_message():
	message = await get_message()
	message = await process_message(message)
	await deal_with_message(message)

async def main():
	async with sem:
		asyncio.ensure_future(main())
		await utilize_message()

if __name__ == '__main__':
	loop = asyncio.get_event_loop()
	try:
		asyncio.ensure_future(main())
		loop.run_forever()
	finally:
		loop.run_until_complete(loop.shutdown_asyncgens())
		loop.close()
