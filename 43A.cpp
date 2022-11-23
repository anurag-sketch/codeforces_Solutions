#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int i=0;
	unordered_map<string,int> mp;
	while(i<n)
	{
	    string s;
	    cin>>s;
	    
	    mp[s]++;
	    i++;
	}
	
	unordered_map<string,int> :: iterator ip;
	
	int mx= INT_MIN;
	for(ip=mp.begin();ip!=mp.end();ip++)
	{
	    mx=max(mx,ip->second);
	}
	
	for(ip=mp.begin();ip!=mp.end();ip++)
	{
	    if(ip->second == mx)
	    {
	        cout<<ip->first;
	    }
	}
	
	
	return 0;
}
