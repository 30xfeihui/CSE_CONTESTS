n = int(input())
array = tuple(map(int,input().split()))

maxx = max(array)
count = array.count(maxx)

print(count)