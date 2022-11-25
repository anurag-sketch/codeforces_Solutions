#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cases;
	cin>>cases;
	
	int i=0;
	while(i<cases)
	{
	    string s;
	    cin>>s;
	    string ans[2 * s.size()];
	    
	    for(int i = 0;i<s.size();i++)
	    {
	        ans[i] = s[i];
	        ans[(2 * s.size()) - 1 - i] = s[i];
	    }
	    
	    for(int i=0;i<(2*s.size());i++)
	    {
	        cout<<ans[i];
	    }
	    cout<<endl;
	    
	    
	    i++;
	    
	}
	
	return 0;
}
