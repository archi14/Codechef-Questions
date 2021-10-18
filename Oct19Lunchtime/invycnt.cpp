#include <iostream>
using namespace std;
typedef long long ll;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    ll n,k;
	    cin>>n>>k;
	    ll a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	   ll count=0;
	   for(int i=0;i<n;i++)
	   {
	       ll left=0, right=0;
	       ll j=i-1;
	       while(j>=0)
	       {
	           if(a[j]<a[i])
	           {
	               left++;
	           }
	           j--;
	       }
	       j=i+1;
	       if(left)
	       {
	           count= count + (k*(k-1)/2)*left;
	       }
	       while(j<n)
	       {
	           if(a[j]<a[i])
	           {
	               right++;
	           }
	           j++;
	       }
	       if(right)
	       {
	           count = count + (k*(k+1)/2)*right;
	       }
	   }
	   
	   cout<<count<<endl;
	}
}

