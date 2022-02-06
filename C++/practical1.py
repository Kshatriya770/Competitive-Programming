import math

arr = list(map(int,input().split()))
print(arr)
print("Maximum = ", max(arr))
print("Minnimum = ", min(arr))
print("Sum = ", sum(arr))
avg = sum(arr)/len(arr)
print("Average = ", avg)
n = int(input("Enter the number for the square root of: "))
print(math.sqrt(n))
p = float(input("Enter the number for the round off: "))
print(round(p,2))

