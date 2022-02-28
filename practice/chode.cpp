#include <iostream>
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool comp(vector<ll> a, vector<ll> b)
{
    if(a[0]>b[0])
    {
        return true;
    }else if(a[0]==b[0])
    {
        if(a[1]>b[1])
        {
            return true;
        }
        return false;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string seq;
        cin>>seq;
        cin.ignore();
        string cypher;
        getline(cin, cypher);
        vector<ll> count[26];
        // first index ==count and second index is element
        for(int i=0;i<26;i++)
        {
            count[i]={-1,-1};
        }
        for(int i=0;i<cypher.size();i++)
        {
            if((cypher[i]>=65 && cypher[i]<=90) || (cypher[i]>=97 && cypher[i]<=122))
            {
                int temp = cypher[i]-'a';
                if(cypher[i]>=65 && cypher[i]<=90)
                {
                    temp+=32;
                }
                 
                
                if(count[temp][0]==-1)
                {
                    count[temp][1]=temp;
                    count[temp][0]=1;
                }else
                {
                    count[temp][0]++;
                }
                
            }
            
        }
        
        sort(count, count+26, comp);
        
        for(int i=0;i<26;i++)
        {
            
                if(count[i][0]==0)
                {
                    break;
                }
                char temp = count[i][1]+'a';
                ll c = count[i][0];
            
        }
        unordered_map<char,char> mapping;    
        int j=seq.size()-1;
        for(int i=0;i<26;i++)
        {
            if(count[i][0]==0)
            {
                break;
            }
                char temp = count[i][1]+'a';
                if(temp>=65 && temp<=90)
                {
                    temp+=32;
                }
                mapping[temp] = seq[j--];
            //cout<<temp<<"->"<<mapping[temp]<<endl;
            
        }
        string ans="";
        for(int i=0;i<cypher.size();i++)
        {
             if((cypher[i]>=65 && cypher[i]<=90) || (cypher[i]>=97 && cypher[i]<=122))
            {
                
                if(cypher[i]>=65 && cypher[i]<=90)
                {
                    ans += mapping[cypher[i]+32]-32;
                }else
                {
                     ans += mapping[cypher[i]];
                }
                    
                
            }else
            {
                ans+=cypher[i];
            }
            
        }
        cout<<ans<<endl;
    }
}


