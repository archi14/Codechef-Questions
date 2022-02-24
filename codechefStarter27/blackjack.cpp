#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int num= 21-(a+b);
        if(num>=1 && num<=10)
        {
            cout<<num<<endl;
        }else
        {
            cout<<-1<<endl;
        }
    }
}

