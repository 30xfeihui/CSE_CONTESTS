n = int(input())
arr = tuple(int(i) for i in input().split())

even_count,even_index = 0,0
odd_count,odd_index = 0,0


for i,j in enumerate(arr):
	if j%2==0:
		even_index = i
		even_count +=1
	else:
		odd_index = i
		odd_count += 1

print(even_index+1 if even_count==1 else odd_index+1)
'''
same as:
if even_count==1:
	print(even_index+1)
else:
	print(odd_index+1)
'''