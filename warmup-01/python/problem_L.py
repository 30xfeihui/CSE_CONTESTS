if __name__ == "__main__":

	n = int(input())
	array = tuple(map(int,input().split()))
	step = []

	previous, stair = -1,0

	for i in range(n):
		if array[i]==1:
			stair+=1
		if array[i]==1 and (not previous==-1):
			step.append(previous)
		if i==n-1:
			step.append(array[i])
		previous = array[i]


	print(stair)
	print(*step)