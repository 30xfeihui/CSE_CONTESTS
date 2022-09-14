string = input()

if string[0].islower():
	print(string[0].upper()+string[1:])
else:
	print(string)