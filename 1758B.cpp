#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int cases;
    cin>>cases;
    
    int i=0;
    while(i<cases)
    {
        int n;
        cin>>n;
        
        if(n%2 != 0)
        {
            for(int i = 1;i<=n;i++)
            {
                cout<<3<<' ';
            }
        }
        else
        {
             
             for(int i=1;i<=n-2;i++)
             {
                 cout<<2<<" ";
             }
             cout<<1<<" ";
             cout<<3<<" ";
            
        }
        cout<<endl;
        i++;
    }
    
}
