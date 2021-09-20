#include <iostream>
using namespace std;
/**
We want to arrange the number from 1 to N in such a way that i=1->Ngcd[i+Ai]>1, 
There could be multiple answers to this question, but the easiest way would be
to make all the numbers even, if all the numbers are even then gcd would be 2.
to make all the numbers even, we place odd numbers at odd position and even number at even. That is already the case if we print the numbers from 1 to N as it is. 
1+1,2+2,3+3,4+4
2,4,6,8
gcd is 2.
**/
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
}

