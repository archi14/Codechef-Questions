#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,p;
	    cin>>n>>k>>p;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    if(p==0)
	    {
	        int maximum=0;
	        for(int i=0;i<n;i++)
	        {
	            maximum = max(maximum, a[i]);
	        }
	        if(k%2==0 && a[1]!=maximum && a[n-2]!=maximum)
	        {
	            maximum = max(a[1], a[n-2]);
	            for(int i=1;i<n-1;i++)
	            {
	                maximum = max(maximum, min(a[i-1],a[i+1]));
	            }
	        }
	        cout<<maximum<<endl;
	    }else
	    {
	        int minimum=INT_MAX;
	        for(int i=0;i<n;i++)
	        {
	            minimum = min(minimum, a[i]);
	        }
	        if(k%2==0 && a[1]!=minimum && a[n-2]!=minimum)
	        {
	            minimum = min(a[1], a[n-2]);
	            for(int i=1;i<n-1;i++)
	            {
	                minimum = min(minimum, max(a[i-1], a[i+1]));
	            }
	        }
	        cout<<minimum<<endl;
	    }
	}
}

