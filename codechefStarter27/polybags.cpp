#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int count=n/10;
	    if(n%10!=0)
	    {
	        count++;
	    }
	    cout<<count<<endl;
	}
}

