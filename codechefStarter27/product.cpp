#include <iostream>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    
    return gcd(b%a, a);
}
/** 
The lowest common number between b and c is the lcm of b and c.
so if a*b == lcm(b,c) then that would be our required answer.
lcm(b,c) = (b*c)/gcd(b,c)
a = (b*c)/gcd(b,c)*b = c/gcd(b,c)
**/
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int b,c;
        cin>>b>>c;
        //cout<<gcd(b,c)<<" ";
        int value = c/gcd(b,c);
        cout<<value<<endl;
    }
}


