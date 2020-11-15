#!/usr/bin/env python3

import asyncio

async def say(what, when):
	await asyncio.sleep(when)
	print(what)

loop = asyncio.get_event_loop()

loop.create_task(say('first hello', 2))
loop.create_task(say('second hello', 1))

# This wil never terminate, hit CTRL-C to stop it.
loop.run_forever()
loop.close()
