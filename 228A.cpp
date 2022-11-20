#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    vector<int> v(4);
        unordered_map<int,int> mp;
    for(int i=0;i<4;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        mp[x]++;
    }
    
    unordered_map<int,int> :: iterator ip;
    int count=0;
    for(ip=mp.begin();ip!=mp.end();ip++)
    {
        count++;
    }
    
    cout<<4-count;
    

    
	
	return 0;
}
