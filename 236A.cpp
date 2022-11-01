#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    cin>>s;
    
    int arr[27];
    for(int i=0;i<27;i++)
    {
        arr[i]=0;
    }
    
    int j=0;
    while(j<s.size())
    {
        int x =int(s[j]) - 97;
        arr[x]++;
         j++;
    }
    int k=0;
    int count=0;
    while(k<27)
    {
        if(arr[k] >= 1)
        {
            count++;
        }
        k++;
    }
    if(count%2 == 0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    
   
   
    
}