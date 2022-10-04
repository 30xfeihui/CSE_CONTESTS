if __name__ == "__main__":

	for _ in range(int(input())):
		n,m = map(int,input().split())
		board = []

		for i in range(n):
			inputt = list(map(int,input().split()))
			board.append(inputt)

		pointer1,pointer2 = 0,0
		ans,maxx = -1,0

		for i in range(n):
			for j in range(m):

				pointer1,pointer2 = i,j
				while 1:
					if pointer1==n-1 or pointer2==0:
						break
					pointer1+=1
					pointer2-=1
					maxx += board[pointer1][pointer2]

				pointer1,pointer2 = i,j
				while 1:
					if pointer1==n-1 or pointer2==m-1:
						break
					pointer1+=1
					pointer2+=1
					maxx += board[pointer1][pointer2]

				pointer1,pointer2 = i,j
				while 1:
					if pointer1==0 or pointer2==0:
						break
					pointer1-=1
					pointer2-=1
					maxx += board[pointer1][pointer2]

				pointer1,pointer2 = i,j
				while 1:
					if pointer1==0 or pointer2==m-1:
						break
					pointer1-=1
					pointer2+=1
					maxx += board[pointer1][pointer2]

				maxx += board[i][j]
				ans = max(maxx,ans)
				maxx=0
		print(ans)