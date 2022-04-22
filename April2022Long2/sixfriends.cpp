#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int doubleCost = x*3, tripleCost = y*2;
	    cout<<min(doubleCost, tripleCost)<<endl;
	}
}

