#!/usr/bin/env python3

import asyncio

async def print_every_10sec():
	for i in range(10):
		await asyncio.sleep(10)
		print(i, 'decade')

async def print_every_second():
	"Print seconds for ten seconds"
	for i in range(10 * 60):
		for i in range(60):
			print(i, 's')
			await asyncio.sleep(1)

loop = asyncio.get_event_loop()

loop.run_until_complete(
	asyncio.gather(
		print_every_10sec(),
		print_every_second()
	)
)
loop.close()
