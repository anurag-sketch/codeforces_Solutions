#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	
	
	for(int i = 0 ; i < s.size() ; i++)
	{
	    s[i]=tolower(s[i]);
	}
	string k;
	for(int i = 0; i<s.size() ; i++)
	{
	    if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i]!= 'y')
	    {
	        k.push_back(s[i]);
	        
	    }
	    
	}
	int dots=k.size();
	string ans;
	ans.push_back('.');
	
	for(int i=0;i<k.size();i++)
	{
	    ans.push_back(k[i]);
	    ans.push_back('.');
	}
	ans.erase(ans.begin() + (ans.size() - 1));
	
	
	for(int i = 0;i<ans.size();i++)
	{
	    cout<<ans[i];
	}
	
	return 0;
}
