#include <iostream>
#include <vector>

using namespace std;

int isPrime(int n , vector<int> &pr)
{
	for(std::vector<int>::iterator it = pr.begin(); it != pr.end(); it++)
	{
		if(*it > n/2) return 1;
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
			cout<<i<<endl;
			pr.push_back(i);
		}
	}
}

int main()
{
	vector<int> track;
	int n ;
	cin>>n;
	prime(n,track);
	cout<<endl;
}