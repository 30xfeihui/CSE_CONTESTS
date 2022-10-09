if __name__ == "__main__":

	strr = input()

	for i in strr[::-1]:
		if i=='9':
			print("6",end='')
		elif i=='6':
			print("9",end='')
		else:
			print(i,end='')
	print()