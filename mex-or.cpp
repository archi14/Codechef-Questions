#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

/**
There are three cases we need to consider for this problem.
1. when n=0, then the answer would be 1.
2. calcute the nearest 2 power of n, if it's a power of 2 exactly, then the max number that can be returned is that power and it's smaller say for 5, it's 2 and the value is 4, then the max number would be 4, in both cases the answer would be nearest power of 2.
3. in case the number is nextpower -1, that is for 7 nearest power is 2 and value is 4, and nextpower is 3 and value is 8, and it is nextpower-1, in that case our answer wold be nextpower.
**/
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<1<<endl;
        }else
        {
            ll power = log(n)/log(2);
            
            ll nextpower = pow(2, power+1);
            ll ans = pow(2, power);
            if(n == nextpower - 1)
            {
                ans = nextpower;
            }
            cout<<ans<<endl;
        }
        
        
    }
}

