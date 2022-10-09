if __name__ == "__main__":
	n,m = map(int,input().split())
	arr = sorted([int(i) for i in input().split()])

	arr = arr[::-1] # reverse arr
	summ = 0
	for i in range(m):
		summ+=arr[i]
	print(summ)