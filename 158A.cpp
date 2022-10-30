#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    k=arr[k-1];
    int coutn=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            if(arr[i]>=k)
            {
                coutn++;
            }
        }
    }
    cout<<coutn<<endl;
    return 0;
    
}