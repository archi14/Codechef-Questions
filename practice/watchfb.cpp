#include <iostream>
using namespace std;
/**
Not a difficult question, just have to wary of the various cases.
1. if type==1, we know that A is our answer to the score of fav team.
2. if type ==2:
 a) if we know the previous scores then
 i) if both new scores are greater then the prev scores, then not able to tell the new scores.
 ii) if one of them is greater than the prev scores, then able to determine the answer.
 b) if we don't know the prev scores, then we cannot conclude anything from new scores.

**/
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A=-1,B=-1;
	    while(n--)
	    {
	        int type,s1,s2;
	        cin>>type>>s1>>s2;
	        
	        
	        if(type==1)
	        {
	            cout<<"YES"<<endl;
	            A = s1;
	            B = s2;
	        }else
	        {
	             if(s1==s2)
	            {
	                cout<<"YES"<<endl;
	                A=s1;
	                B=s1;
	                
	            }else if(A==-1 && B==-1)
	            {
	                cout<<"NO"<<endl;
	            }else if(s1>=A && s2>=A)
	            {
	                if(s1>=B && s2>=B)
	                {
	                    cout<<"NO"<<endl;
	                    A=-1;
	                    B=-1;
	                }else
	                {
	                    B = max(s1,s2);
	                    A = min(s1,s2);
	                    cout<<"YES"<<endl;
	                }
	            }else
	            {
	                A = max(s1,s2);
	                B = min(s1,s2);
	                cout<<"YES"<<endl;
	            }
	            
	        }
	    }
	}
}


