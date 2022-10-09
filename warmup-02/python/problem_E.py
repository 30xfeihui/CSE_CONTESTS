if __name__ == "__main__":

	for _ in range(int(input())):
		n = int(input())
		strr = input()

		encode = "abcdefghijklmnop"
		position = 0

		for i in range(0,n,4):
			if strr[i]=='1':
				position+=8
			if strr[i+1]=='1':
                		position+=4
            		if strr[i+2]=='1':
                		position+=2
            		if strr[i+3]=='1':
                		position+=1
        		print(encode[position],end='')
        		position=0
        	print()
