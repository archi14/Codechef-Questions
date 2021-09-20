#include <iostream>
using namespace std;
/**
The shop owner wants to maximize the production of cars, so they would
use as many tyres as available that could be used in a car. The remainder if any could be used in bikes. We are getting the remainder if divided by 4 and if the remainder is greater or equal to 2, then we can make a bike
**/
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int remaining = n%4;
	    if(remaining>=2)
	    {
	        cout<<"YES"<<endl;
	    }else
	    {
	        cout<<"NO"<<endl;
	    }
	}
}

