if __name__ == "__main__":

	for _ in range(int(input())):
		strr = input()

		print(strr[0],end='')

		for i in range(1,len(strr),2):
			print(strr[i],end='')
		print()