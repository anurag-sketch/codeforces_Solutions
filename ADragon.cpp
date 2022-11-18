#include<bits/stdc++.h>
using namespace std;

int main()
{

int initial;
cin>>initial;

int dragonn;
cin>>dragonn;

vector<vector<int>> ans(dragonn);
for(int i=0;i<dragonn;i++)
{
    int dragons,bonus;
    cin>>dragons>>bonus;
    ans[i].push_back(dragons);
    ans[i].push_back(bonus);
}

sort(ans.begin(),ans.end());
bool flag=true;
for(int i=0;i<ans.size();i++)
{
    if(ans[i][0] >=initial)
    {
        flag=false;
        cout<<"NO"<<endl;
        break;
    }
    else if(ans[i][0] < initial)
    {
        initial = initial+ans[i][1];
    }
}
if(flag == true)
{
    cout<<"YES"<<endl;
}



return 0;
}
