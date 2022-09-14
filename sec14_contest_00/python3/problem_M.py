for _ in range(int(input())):
	n, total = map(int,input().split())

	arr = tuple(map(int,input().split()))
	output = ''
	for i in arr:
		if i<=total:
			output+='1'
			total-=i
		else:
			output+='0'
	print(output)