x = 0

for _ in range(int(input())):
	
	string = input()
	if string=='X++' or string=='++X':
		x+=1
	if string=='X--' or string=='--X':
		x-=1
	
print(x)