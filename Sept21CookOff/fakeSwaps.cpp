#include <iostream>
using namespace std;
/**
We don't actually want to swap the values in the string, we just want to return whether it's possible or not. During a swap a zero and a one is must, the third element can be anything. The only way it is not possible is when we want to swapsome elements into 1 and we have no zero elements in the other string and vice cersa, rest all the cases we would be able to swap the elements successfully. 
**/
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    int count1=0,count0=0;
	    bool zero=false,one=false;
	    for(int i=0;i<a.size();i++)
	    {
	        if(a[i]!=b[i])
	        {
	            if(b[i]=='1')
	            {
	                count1++;
	            }else
	            {
	                count0++;
	            }
	        }
	        if(b[i]=='0')
	        {
	            zero=true;
	        }
	        if(b[i]=='1')
	        {
	            one=true;
	        }
	    }
	    
	    if(count0==0 && count1!=0)
	    {
	        if(zero==false)
	        {
	            cout<<"NO"<<endl;
	        }else
	        {
	            cout<<"YES"<<endl;
	        }
	    }else if(count0!=0 && count1==0)
	    {
	        if(one==false)
	        {
	            cout<<"NO"<<endl;
	        }else
	        {
	            cout<<"YES"<<endl;    
	        }
	    }else{
	        cout<<"YES"<<endl;
	    }
	}
}

