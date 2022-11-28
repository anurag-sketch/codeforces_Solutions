#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int cases;
	cin>>cases;
	
	int i=0;
	while(i<cases)
	{
	    int size;
	    cin>>size;
	 vector<int> v;
	 for(int i=0;i<size;i++)
	{
	    int x;
	    cin>>x;
	    
	    v.push_back(x);
	}
	map<int,int> mp;
	bool flag=true;
	for(int i=0;i<size;i++)
	{
	    mp[v[i]] ++;
	    if(mp[v[i]] > 1)
	    {
	        flag=false;
	        cout<<"NO"<<endl;
	        break;
	    }
	}
	if(flag==true)
	{
	cout<<"YES"<<endl;	    
	}
 
	
	    i++;
	}
	return 0;
}
