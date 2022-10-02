// Java implementation of above solution

class GFG
{
	static int MAX=10000;

	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	static boolean[] prime=new boolean[MAX + 1];
	
static void SieveOfEratosthenes()
{

	prime[1] = true;

	for (int p = 2; p * p <= MAX; p++) {

		// If prime[p] is not changed, then it is a prime
		if (prime[p] == false) {

			// Set all multiples of p to non-prime
			for (int i = p * 2; i <= MAX; i += p)
				prime[i] = true;
		}
	}
}

// find the product of 1st N prime numbers
static int solve(int n)
{
	// count of prime numbers
	int count = 0, num = 1;

	// product of prime numbers
	int prod = 1;

	while (count < n) {

		// if the number is prime add it
		if (!prime[num]) {
			prod *= num;

			// increase the count
			count++;
		}

		// get to next number
		num++;
	}
	return prod;
}

// Driver code
public static void main(String[] args)
{
	// create the sieve
	SieveOfEratosthenes();

	int n = 7;

	// find the value of 1st n prime numbers
	System.out.println(solve(n));

}
}
