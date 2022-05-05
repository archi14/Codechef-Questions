#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,x;
	    cin>>n>>m>>x;
	    if(m<=x)
	    {
	        cout<<0<<endl;
	    }else
	    {
	        int count=0;
	        count+=(n*x)/(x+1);
	        cout<<count<<endl;
	    }
	}
}

