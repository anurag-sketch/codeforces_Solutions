#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k;
cin>>n>>k;

int totaltime = (240);
int rem = (240) - k;
if(rem>0)
{
    vector<int> v;
    for(int i=1;i<=n;i++)
    {
        v.push_back(i*5);
    }
    
    int count=0;
    for(int i=0;i<v.size();i++)
    {
        if(rem - v[i] >= 0)
        {
            rem=rem-v[i];
            count++;
        }
    }
    cout<<count;
    
}
else
{
    cout<<0;
}
return 0;

}
