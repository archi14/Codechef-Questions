#include <iostream>
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int primes[1000000];
vector<int> primeNumbers;




int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    ll ans[n];
	    int index=0;
	    ll start=2;
	    unordered_map<int,int> used;
	    while(index<n)
	    {
	        while(used.find(start)!=used.end())
	        {
	            start++;
	        }
	        ans[index++] = start;
	        used[start]=1;
	        if(index==n)
	        {
	            break;
	        }
	        ans[index++] = 2*start;
	        used[2*start]=1;
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<ans[i]<<" ";
	    }
	    cout<<endl;
	}
}

