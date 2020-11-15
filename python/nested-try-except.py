class AnError(Exception):
	def __str__(self): return f'ERROR!'

includes = True

def aprocess(shouldwork=True):
	if shouldwork: print('The process is working.')
	else: raise AnError()

def main():
	try: aprocess(shouldwork=True)
	except Exception as e: print(e)
	else:
		if not includes: return
		try: print('continuing the rest...') #raise AnError() #raise Exception()
		except AnError: print('-> test exception occured!')
		else: print('Desired output.')

if __name__ == '__main__':
	main()
