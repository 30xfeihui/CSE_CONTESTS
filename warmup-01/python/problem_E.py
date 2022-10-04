from collections import defaultdict

if __name__ == "__main__":

	n,k = map(int,input().split())
	array = tuple(map(int,input().split()))

	mp = defaultdict(int)
	index = []
	idx = 0

	for i,j in enumerate(array):
		if not mp[j] and idx<k:
			index.append(i+1)
			idx+=1
		mp[j]+=1

	if len(mp)<k:
		print("NO")
	else:
		print("YES")
		print(*index)