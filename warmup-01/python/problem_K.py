if __name__ == "__main__":

	for _ in range(int(input())):
		
		n = int(input())
		keys = [int(i) for i in input().split()]

		for i in range(n):
			m = input().split()
			lock = m[1]

			for j in lock[::-1]:
				if j=='D' and keys[i]==9:
					keys[i]=0
				elif j=='D' and keys[i]!=9:
					keys[i]+=1
				elif j=='U' and keys[i]==0:
					keys[i]=9
				elif j=='U' and keys[i]!=0:
					keys[i]-=1

		print(*keys)