#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	int count1=0,count2=0;
	int i=0;
	for(int i=0;i<s.size();i++)
	{
	    if(s[i] == 'A')
	    {
	        count1++;
	    }
	    else
	    {
	        count2++;
	    }
	}
	if(count1>count2) cout<<"Anton";
	else if(count2>count1) cout<<"Danik";
	else cout<<"Friendship";
	
	return 0;
	
}
