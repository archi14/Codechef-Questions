#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll power = log(n)/log(2);
	    ll number = pow(2, power);
	    if(number == n)
	    {
	        if(power == 0)
	        {
	            cout<<1<<endl;
	        }else
	        {
	            ll ans = pow(2, power-1);
	            cout<<ans<<endl;    
	        }
	        
	    }else
	    {
	        ll prevCount = 0;
	        if(power>0)
	        {
	            
	            prevCount = pow(2, power-1);
	        }
	    
	        ll temp = pow(2, power+1) -n -1;
	        ll currentCount = pow(2, power) - temp;
	        cout<<max(prevCount, currentCount)<< endl;
	   
	    }
	    
	    
	    
	    
	}
	return 0;
}

