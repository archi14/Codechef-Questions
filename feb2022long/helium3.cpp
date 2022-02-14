#include <iostream>
using namespace std;
/** Simply check if power generated is greater or equal to power required
to get the funds sanctioned.**/
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    int needed = a*b;
	    int generated = x*y;
	    if(generated>=needed)
	    {
	        cout<<"yes"<<endl;
	    }else
	    {
	        cout<<"no"<<endl;
	    }
	}
}

