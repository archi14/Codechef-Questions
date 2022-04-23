#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    
}
bool checkSorted(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            return false;
        }
    }
    return true;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n-1;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            swap(&a[i], &a[i+1]);
	            break;
	        }
	    }
	    if(checkSorted(a, n))
	    {
	        cout<<"YES"<<endl;
	    }else
	    {
	        cout<<"NO"<<endl;
	    }
	}
}

