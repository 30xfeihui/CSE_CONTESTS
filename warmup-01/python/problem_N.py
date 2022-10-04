from collections import defaultdict

if __name__ == "__main__":

	for _ in range(int(input())):
		n = int(input())
		array = tuple(map(int,input().split()))

		mp = defaultdict(int)
		maxx = -10

		for i in array:
			mp[i]+=1

		for key,item in mp.items():
			maxx = max(maxx,item)
		
		print(n-maxx)