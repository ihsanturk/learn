nums = [1, 0, 0, 0, 4, 2]
i = 0

print('begin')

while True:
	try:
		print(f'3 / {nums[i]}: {3 / i}')
		break
	except ZeroDivisionError:
		print(f'3 / {nums[i]}: Cannot divide to zero')
		i += 1
		continue

print('done')
