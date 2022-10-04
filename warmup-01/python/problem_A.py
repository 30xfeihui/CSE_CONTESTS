import sys

def not_divide(n,k):
	return n-(n//k)

def binary_search(n,k):
	lo,hi = 1,sys.maxsize

	while lo<hi:
		mid = lo+(hi-lo)//2

		p = not_divide(mid,n)
		if p<k:
			lo = mid+1
		else:
			hi = mid
	return lo

if __name__ == "__main__":

	for _ in range(int(input())):
		n,k = map(int,input().split())

		ans = binary_search(n,k)

		print(ans)