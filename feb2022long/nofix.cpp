#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int index=1,i=0,count=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        while(i<n)
        {
            if(a[i]==index)
            {
                i--;
                count++;
            }
            index++;
            i++;
        }
        
        cout<<count<<endl;
    }
}

