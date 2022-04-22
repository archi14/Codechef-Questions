#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int first = a*10, second=5*b;
	    if(first>second)
	    {
	        cout<<"First"<<endl;
	    }else if(second>first)
	    {
	        cout<<"Second"<<endl;
	    }else
	    {
	        cout<<"Any"<<endl;
	    }
	}
}

