from collections import defaultdict

if __name__ == "__main__":

	for _ in range(int(input())):
		n = int(input())
		array = tuple(map(int,input().split()))
		mp = defaultdict(int)

		for i in array:
			mp[i]+=1

		if len(mp)==n:
			print(n)
		elif (n-len(mp))%2==1:
			print(len(mp)-1)
		else:
			print(2)

