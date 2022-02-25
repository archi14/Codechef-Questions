#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_map<ll,ll> m;
ll max(ll a, ll b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

/**
for n we have check whether n is greater or n/4+n/3+n/2, further n/4 could 
also be broken down into three parts, then also we would have to see whether n 
is greater or the sum of three parts. This is followed recursively. hence using a recursive approach. Using memoization to reduce the multiple call load for the same number.
**/
ll getValue(ll n)
{
    
    if(n==0 || n==1)
    {
        return n;
    }
    
    if(m.find(n)==m.end())
        m[n] = max(n, (getValue(n/4) + getValue(n/3)+ getValue(n/2)));
    return m[n];
}

int main() {
    ll n;
    while(cin>>n)
    {
        cout<<getValue(n)<<endl;
    }  
}

