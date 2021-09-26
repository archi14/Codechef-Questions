#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll p,a,b,c,x,y;
	    cin>>p>>a>>b>>c>>x>>y;
	    ll costAnar = x*a + b;
	    ll costChakri = y*a + c;
	    ll count1=0,count2=0;
	    
	    if(p%costAnar==0)
	    {
	        count1+=p/costAnar;
	    }else
	    {
	        ll rem  = p%costAnar;
	        count1+= p/costAnar;
	        count1+= rem/costChakri;
	    }
	    if(p%costChakri==0)
	    {
	        count2 = p/costChakri;
	    }else
	    {
	        ll rem = p%costChakri;
	        count2+= p/costChakri;
	        count2+=rem/costAnar;
	    }
	    
	    cout<<max(count1, count2)<<endl;
	}
}

