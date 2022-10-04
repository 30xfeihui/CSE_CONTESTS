if __name__ == "__main__":

	for _ in range(int(input())):
		blank = input()
		board = list()

		for i in range(8):
			board.append(list(input()))
		previous_count=0

		ansi,ansj = 0,0
		for i in range(8):
			count = 0
			for j in range(8):
				if board[i][j]=='#':
					count+=1
					ansi,ansj=i,j

			if previous_count==2 and count==1:
				break
			previous_count=count

		print(ansi+1,ansj+1)
