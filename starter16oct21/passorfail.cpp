#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,p;
	    cin>>n>>x>>p;
	    int scores = 3*x - (n-x);
	    if(scores>=p)
	    {
	        cout<<"PASS"<<endl;
	    }else
	    {
	        cout<<"FAIL"<<endl;
	    }
	}
}

