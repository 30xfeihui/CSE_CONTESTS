for _ in range(int(input())):
	
	n = int(input())	
	string = input()
	cnt,cond = 0,0

	for i in string:
		if i=='a' or i=='e' or i=='o' or i=='i' or i=='u':
			cnt = 0
		else:
			cnt+=1
		if cnt==4:
			cond = 1
			break
			
	if cond==1:
		print("NO")
	else:
		print("YES")