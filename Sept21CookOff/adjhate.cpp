#include <iostream>
#include <bits/stdc++.h>

using namespace std;
/**

For the sum of difference of adjacent elements to be odd, we have to make sure tthat the adjacent elements are odd and even, because odd-odd will be even and so will even-even. We are storing odd and even elements in two seperate vectors.
After that we would have to take care of multiple cases.
1. If either odd and even elements are zero, we won't be able to satisfy the given condition.
2. if number of odd and even elements are equal, then we would have to check how many pairs are there, is the pairs are even then the sum would be even, hence return -1, else return alternate odd and even elements.
3. if number of odd elements are greater than even elements We would firstly get the pairs formed using same number of elements. If that pair is even, the sum would be even, to make the sum odd we would want even element at the end and after that excess odd elements and vice versa for when pairs are odd.
4. If number of even elements are greater than the number of odd elements, then calculate the pair similar to the case above, if pair is even we would want odd element at  the end and after that excess even elements, else vice versa. 
**/
void printNumbers(vector<int> a, vector<int> b)
{
    int n = a.size(),m=b.size(),i=0,j=0;
    bool first=true;
    while(i<n && j<m)
    {
        if(first)
        {
            cout<<a[i++]<<" ";
        }else
        {
            cout<<b[j++]<<" ";
        }
        first=!first;
    }
    while(i<n)
    {
        cout<<a[i++]<<" ";
    }
    while(j<m)
    {
        cout<<b[j++]<<" ";
    }
}
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int> odd,even;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                even.push_back(a[i]);
            }else
            {
                odd.push_back(a[i]);
            }
        }
        
        if(odd.size()==0 || even.size()==0)
        {
            cout<<-1;
        }else if(odd.size()==even.size())
        {
            int pairs = n-1;
            if(pairs%2==0)
            {
                cout<<-1<<endl;
            }else
            {
                printNumbers(odd, even);
            }
        }else if(odd.size()>even.size())
        {
            int pairs = 2*even.size()-1;
            if(pairs%2==0)
            {
                printNumbers(odd, even);
            }else
            {
                printNumbers(even, odd);
            }
        }else
        {
            int pairs = 2*odd.size()-1;
            if(pairs%2==0)
            {
                printNumbers(even, odd);
            }else
            {
                printNumbers(odd, even);
            }
        }
        cout<<endl;
        
        
    }
}

