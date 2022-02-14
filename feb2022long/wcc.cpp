#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    string a;
	    cin>>a;
	    int carl=0,chef=0;
	    for(int i=0;i<a.size();i++)
	    {
	        if(a[i]=='C')
	        {
	            carl+=2;
	        }else if(a[i]=='N')
	        {
	            chef+=2;
	        }else
	        {
	            carl+=1;
	            chef+=1;
	        }
	    }
	    
	    if(carl>chef)
	    {
	        cout<<60*x<<endl;
	    }else if(carl==chef)
	    {
	        cout<<55*x<<endl;
	    }else
	    {
	        cout<<40*x<<endl;
	    }
	}
}

