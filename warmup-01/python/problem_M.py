if __name__ == "__main__":

	string1 = input()
	string2 = input()
	c,ans = 0,0

	for i,j in zip(string2[::-1],string1[::-1]):
		if i!=j:
			break
		else:
			c+=1
	ans = (len(string1)-c)+(len(string2)-c)

	print(ans)