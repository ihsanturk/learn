class TestException(Exception):
	def __str__(self): return f'A test exception.'

includes = True

def main():
	if not includes: return
	try: pass #raise TestException()
	except TestException: print('test exception occured.')
	else: print('Desired output.')

if __name__ == '__main__':
	main()
