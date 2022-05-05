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
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
        }
        ll number = (2*sum)/n;
        if(sum%(n/2)==0 && number%2==1)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
}

