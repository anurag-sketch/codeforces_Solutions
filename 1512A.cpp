#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cases;
	cin>>cases;
	
	int i=0;
	
	while(i<cases)
	{
	    unordered_map<int,int> mp;
	    int num;
	    cin>>num;
	    vector<int> v;
	    for(int j=0;j<num;j++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	        mp[x]++;
	    }
	    unordered_map<int,int>::iterator ip;
	    int se;
	    for(ip=mp.begin();ip!=mp.end();ip++)
	    {
	        if(ip->second == 1)
	        {
	           se=ip->first;
	        }
	    }
	    
	    for(int k=0;k<v.size();k++)
	    {
	        if(v[k] == se)
	        {
	           cout<<k+1<<endl;
	        }
	    }
	    i++;
	    
	}

	
	
	return 0;
}
