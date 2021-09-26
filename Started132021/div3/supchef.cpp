#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n,k;
	    cin>>m>>n>>k;
	    int timetaken = n*k;
	    if(timetaken<m)
	    {
	        cout<<"YES"<<endl;
	    }else
	    {
	        cout<<"NO"<<endl;
	    }
	}
}

