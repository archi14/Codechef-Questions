#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int individualTime = 0, maxElement=0;
	    for(int i=0;i<n;i++)
	    {
	        individualTime += ceil((double)a[i]/(double)x);
	        maxElement = max(maxElement, a[i]);
	    }
	    
	    int timeTaken = min(individualTime, maxElement);
	    cout<<timeTaken<<endl;
	}
}

