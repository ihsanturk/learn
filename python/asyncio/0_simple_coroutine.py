#!/usr/bin/env python3

import asyncio

async def say(what, when):
	await asyncio.sleep(when)
	print(what)

loop = asyncio.get_event_loop()
loop.run_until_complete(say('hello', 1))
loop.close()
