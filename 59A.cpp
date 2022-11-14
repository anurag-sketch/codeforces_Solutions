#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int countl = 0;
	int countu = 0;
	
	for(int i = 0 ;i < s.size() ; i++)
	{
	   if( int(s[i]) >= 65 && int(s[i]) <=90 )
	{
	    countu ++ ;
	}
	else
	{
	    countl++;
	}
	}
	
	if(countu<=countl)
	{
	    for(int i =0 ;i < s.size();i++)
	    {
	        s[i] = tolower(s[i]);
	        cout<<s[i];
	    }
	}
	else
	{
	    for(int i = 0 ;i < s.size(); i++)
	    {
	        s[i] = toupper(s[i]);
	        cout<<s[i];
	    }
	}
	

	
	return 0;
}
