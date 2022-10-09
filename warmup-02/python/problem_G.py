if __name__ == "__main__":
	n,k = map(int,input().split())
	height = list(map(int,input().split()))

	maxx = max(height)

	if maxx<k:
		print("0")
	else:
		print(maxx-k)