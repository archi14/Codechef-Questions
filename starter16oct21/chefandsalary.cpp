#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int totalcount=0,curCount=0,maxCount=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                curCount++;
                totalcount++;
            }else
            {
                maxCount = max(curCount, maxCount);
                curCount=0;
            }
        }
        maxCount = max(curCount, maxCount);
        int salary = totalcount*x + maxCount*y;
        cout<<salary<<endl;
    }
}

