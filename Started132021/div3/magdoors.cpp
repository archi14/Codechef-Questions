#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int n = a.size();
        int flipCount=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]=='0')
            {
                if(flipCount%2==0)
                {
                    flipCount++;
                }
            }else
            {
                if(flipCount%2!=0)
                {
                    flipCount++;
                }
            }
        }
        cout<<flipCount<<endl;

        
    }
}

