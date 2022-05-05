#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ad[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>ad[i];
	    }
	    int count[10]={0};
	    for(int i=0;i<n;i++)
	    {
	        count[ad[i]-1]++;
	    }
	    int votes=0,isConfused=0,laptop;
	    
	    for(int i=0;i<10;i++)
	    {
	        if(count[i]>votes)
	        {
	            votes = count[i];
	            isConfused=0;
	            laptop=i;
	        }else if(votes==count[i])
	        {
	            isConfused=1;
	        }
	    }
	    if(isConfused)
	    {
	        cout<<"CONFUSED"<<endl;
	    }else{
	        cout<<laptop+1<<endl;
	    }
	}
}

