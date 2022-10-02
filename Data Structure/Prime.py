
MAX=10000

prime=[True for i in range(MAX+1)]

def SieveOfErastosthenes():
	
	prime[1]=False
	
	for p in range(2,int((MAX ** (1/2))+1)):
		
		if prime[p]:
			for i in range(2*p,MAX+1,p):
				prime[i]=False
				

def solve(n):
	count,num=0,1
	
	
	prod=1
	while count<n:
		
		if prime[num]:

			prod*=num
			print(num,end=" ")
			count+=1
            
		num+=1
        
	return prod

SieveOfErastosthenes()

n=int(input())


print(solve(n))

			
