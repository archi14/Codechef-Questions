#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int a[n];
        int timeTaken=0;
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        }
        for(int i=0;i<p;i++)
        {
            if(a[i]==0)
            {
                timeTaken+=x;
            }else
            {
                timeTaken+=y;
            }    
        }
        cout<<timeTaken<<endl;
    }
}

