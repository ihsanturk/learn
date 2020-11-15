#!/usr/bin/env python3
import asyncio
import aiohttp

async def fetch(session, url):
	async with session.get(url) as response:
		assert response.status == 200
		return await response.text()

async def main():
	async with aiohttp.ClientSession() as session:
		html = await fetch(session, 'http://python.org')
		print(html[:100])

if __name__ == '__main__':
	loop = asyncio.get_event_loop()
	content = loop.run_until_complete(main())
