#include <iostream>
using namespace std;
/**
The question may seem intimadating at first, for us to figure out all the moves so that the final index is maximised, but after some contemplation we can reach the conclusion that what matters is the last index and rest moves can be made any way. Dividing the question into two parts.
1. First we will make k-1 moves. Moving from 1 to 0 and 0 to 1, whenever any alternate block is observed.
2. a) If we aren't able to make k-1 moves in n tiles or have reached the last tile, then simply return -1.
b) else we will search for the farthest 0 if last tile was 1 or farthest 1 if last tile was 0, the farthest tile if exists would be index that we would want to return.
**/
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        char current=a[0];
        int i=1;
        while(k>1 && i<n)
        {
            if(current=='0' && a[i]=='1')
            {
                current='1';
                k--;
            }else if(current=='1' && a[i]=='0')
            {
                current='0';
                k--;
            }
            i++;
        }
        
        int ans=-1;
        if(i==n)
        {
            cout<<ans<<endl;
        }else
        {
            if(current=='0')
            {
                for(int j=i;j<n;j++)
                {
                    if(a[j]=='1')
                    {
                        ans=j+1;
                    }
                }
            }else
            {
                for(int j=i;j<n;j++)
                {
                    if(a[j]=='0')
                    {
                        ans=j+1;
                    }
                }
            }
            cout<<ans<<endl;
        }
    }
}

