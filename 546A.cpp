#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k,ini,w;
	cin>>k>>ini>>w;
	if(k>=1)
	{
	int req=(k)*((w*(w+1))/2);
	
	if(req>ini)
	{
	 	cout<<(req-ini);   
	}
	else
	{
	    cout<<"0";
	}
	
	    
	}
	else
	{
	    cout<<"0";
	}

	return 0;
}
