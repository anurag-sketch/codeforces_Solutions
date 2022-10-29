#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int i=0;
	while(i<test)
	{
	    string s;
	    cin>>s;
	    if(s.size()>10)
	    {
	       string a;
	       a.push_back(s[0]);
	       int count=0;
	       for(int i=1;i<s.size()-1;i++)
	       {
	           count++;
	       }
	       string x;
	       x=to_string(count);
	       a=a+x;
	       a.push_back(s[s.size()-1]);
	       cout<<a<<endl;
	    }
	    else
	    {
	        cout<<s<<endl;
	    }
	    i++;
	}
	return 0;
}
