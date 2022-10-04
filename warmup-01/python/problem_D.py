from collections import defaultdict

if __name__ == "__main__":

	n= int(input())
	array = tuple(map(int,input().split()))

	mp = defaultdict(int)
	index = []

	for i in array[::-1]:
		if not mp[i]:
			index.append(i)
			mp[i] = 1

	print(len(index))
	print(*index[::-1])