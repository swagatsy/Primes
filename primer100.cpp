#include <iostream>
#include <vector>

using namespace std;

int isPrime(int n , vector<int> &pr)
{
	for(std::vector<int>::iterator it = pr.begin(); it != pr.end(); it++)
	{
		if(n % *it ==0) return 0;
		
	}	
	return 1;
}

int main()
{
	vector<int> pr;
	
	int count=0;
	int it = 2;
	while(1)
	{
		if(isPrime(it,pr))
		{
			pr.push_back(it);
			count++;
			cout<<it<<endl;
		}
		if(count == 100000) break;
		it++;
	}
	cout<<endl;
}