#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int countPos=0,countNeg=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                countPos++;
            }else
            {
                countNeg++;
            }
        }
        //cout<<countPos<<" "<<countNeg<<endl;
        if((countNeg==countPos) || (abs(countPos-countNeg)<=2 && (countNeg%2==0 || countPos%2==0)))
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
}

