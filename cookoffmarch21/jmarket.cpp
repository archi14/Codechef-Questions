#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        int prices[3];
        cin>>x;
        for(int i=0;i<3;i++)
        {
            cin>>prices[i];
        }
        sort(prices, prices+3);
        
        int sum=(prices[0]*(x-1))+prices[1];
        cout<<sum<<endl;
        
    }
}

