for i in range(int(input())):
	
	a = list(map(int,input().split()))
	a = sorted(a)
	
	print(f'Case {i+1}: {a[1]}')