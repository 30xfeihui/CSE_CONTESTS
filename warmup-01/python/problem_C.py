if __name__ == "__main__":

	for _ in range(int(input())):
		n,m = map(int,input().split())

		limik,bob = 1,2
		total_limk,total_bob = 0,0

		while 1:
			if total_limk>n:
				print("Bob")
				break
			if total_bob>m:
				print("Limak")
				break
			total_bob += bob
			total_limk += limik

			limik+=2
			bob+=2
