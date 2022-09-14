for _ in range(int(input())):
	
	a,b,c,d,e,f = map(int,input().split())

	first_pair = (c==a and d==b) or (c==b and a==d)
	second_pair = (e==a and f==b) or (e==b and f==a)

	if first_pair:
		print(1)
	elif second_pair:
		print(2)
	else:
		print(0)
