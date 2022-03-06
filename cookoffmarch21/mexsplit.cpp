#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<int,int> m;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        
        int zeroCount=m[0];
        int other = n-m[0];
        cout<<max(other,zeroCount)<<endl;   
    }
}

