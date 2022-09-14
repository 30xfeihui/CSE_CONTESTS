from collections import defaultdict

for i in range(int(input())):
	
	n = int(input())
	arr = tuple(map(int,input().split()))

	visited = defaultdict(int)
	summ=0

	for j in arr[::-1]:
		if visited[j]==0 or visited[-1*j]==0:
			summ+=j
			visited[j]=1
			visited[-1*j]=1

	print(f'Case {i+1}: {summ}')