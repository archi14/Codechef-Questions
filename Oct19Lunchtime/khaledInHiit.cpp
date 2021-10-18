#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/**
Sorting the array, the traverse get the n/4 element that would be x, check it should be greater then the previous element, if not equal distribution is not possible, similar y would be n/2th element and z would be 3*n/4th element. 
all x,y and z should be greater than their corresponding previous elements.
**/
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a, a+n);
	    int x,y,z,ans=-1;
	    int number = n/4;
	    x = a[number];
	    if(x<=a[number-1])
	    {
	        cout<<ans<<endl;
	    }else
	    {
	        y = a[2*number];
	        if(y<=a[2*number - 1])
	        {
	            cout<<ans<<endl;
	        }else
	        {
	            z = a[3*number];
	            if(z<=a[3*number-1])
	            {
	                cout<<ans<<endl;
	            }else
	            {
	                cout<<x<<" "<<y<<" "<<z<<endl;
	            }
	        }
	    }
	}
}

