if __name__ == "__main__":

	for _ in range(int(input())):
		n = int(input())
		m = n
		roundd = 0

		if n>=0 and n<=9:
			roundd = 1
		else:
			non_zero_count = 0
			while n:
				if((n%10)>=1) and((n%10)<=9):
					non_zero_count+=1
			if non_zero_count==1:
				roundd=1

		n = m
		roundd_numbers, mul = [],1

		if not roundd:
			trail = 0
			while n:
				trail = (n%10)*mul
				mul = mul*10
				n =n//10

				if not trail==0:
					roundd_numbers.append(trail)

		if roundd:
			print(1)
			print(m)
		else:
			print(len(roundd_numbers))
			print(*roundd_numbers)