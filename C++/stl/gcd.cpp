
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int findGCD(int arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if(result == 1)
		{
		return 1;
		}
	}
	return result;
}

int main()
{
    int t,n;
    while (t--)
    {
        cin<<n;
        int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = findGCD(arr, n);
    if(ans%2==1){
        cout<<0<<endl;
    }else{
        cout
    }
	return 0;
    }
}
