import time
import requests
from concurrent.futures import ThreadPoolExecutor

URL = 'https://httpbin.org/uuid'

def main():
	with ThreadPoolExecutor(max_workers=20) as executor:
		with requests.Session() as session:
			executor.map(fetch, [session] * 20, [URL] * 20)
			executor.shutdown(wait=True)

def fetch(session, url):
	with session.get(url) as response:
		print(response.json()['uuid'])
	time.sleep(5)
	print('x')

if __name__ == '__main__':
	start = time.perf_counter()
	main()
	finish = time.perf_counter()
	print(f'Finished in {round(finish-start, 2)} second(s)')
