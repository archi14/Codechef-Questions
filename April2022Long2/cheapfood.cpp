#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	    cin>>a;
	    int maxDiscount = max(a/10, 100);
	    cout<<maxDiscount<<endl;
	}
}

