#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int space = z-y;
        int amount = space/x;
        cout<<amount<<endl;
    }
}

