#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int isPrime(int n , vector<int> &pr)
{
	double sq = sqrt(n);
	for(std::vector<int>::iterator it = pr.begin(); it != pr.end(); it++)
	{
		if(*it > sq ) return 1;
		if(n % *it ==0) return 0;
		
	}	
	return 1;
}

void prime(int n , vector<int> &pr)
{
	
	for(int i=2;i<n+1;i++)
	{
		if(isPrime(i,pr)) 
		{
			// cout<<i<<endl;
			pr.push_back(i);
		}
	}
}

int main()
{
	vector<int> track;
	int n = 100000;
	// cin>>n;
	prime(n,track);
	cout<<endl;
}