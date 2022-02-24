#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**
We can either create a newsubstring at every i, without including that character
and then check in a map or something if we have encountered this string or not, if not increase the overall count. This is a correct solution, but a time complex one. We don't really need to save information about the new string. We just have to think about two cases.
1. When the ith index == i-1 index element
1101010100 -> s[0]==s[1], removing both of them would result in  101010100
similarly for s[n] == s[n-1]
but when the consequetive char are diff, we will always get different string output
**/  

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}

