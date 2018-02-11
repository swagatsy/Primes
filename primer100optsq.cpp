#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <time.h>

#define SPEED_CHECK 50000

using namespace std;

int isPrime(int n , vector<int> &pr)
{
	int sq = sqrt(n);
	for(std::vector<int>::iterator it = pr.begin(); it != pr.end(); it++)
	{
		if(*it > sq ) return 1;
		if(n % *it ==0) return 0;
	}	
	return 1;
}

int main()
{
	// Do not forget to comment either of the two cout statements  
	vector<int> pr;
	int n;
	cin >> n;	// input for the number of primes you wish to generate
	int count=0;
	int it = 2;
	clock_t st,en;
	st=clock();
	while(1)
	{
		if(isPrime(it,pr))
		{
			pr.push_back(it);
			count++;
			if(count % SPEED_CHECK == 0)
			{
				en=clock();
				// The below line displays average speed at which numbers are being generated per second
				// It shows the average speed in that range and not from start to that point
 				// cout<<"AVGSPEED from "<<count-50000<<" to "<<count <<" = "<<SPEED_CHECK*CLOCKS_PER_SEC/double(en-st)<<" numbers/sec "<<endl;	
				st = en;
			}
			// The below prints the prime number
			// comment either the speed line above or this line, so as to distinguish outputs properly
			// cout<<it<<endl;
		}
		if(count == n) return 0;
		
		it++;
	}
	// cout<<endl;
}