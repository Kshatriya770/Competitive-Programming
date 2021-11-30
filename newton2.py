n=int(input())
arr=list(map(int,input().split()))[:n]
arr.sort()
s1=sum(arr[:int(n/2)])
s2=sum(arr[int(n/2):])
print(abs(s1-s2))




