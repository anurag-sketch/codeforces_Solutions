//617A

#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int n;
	cin>>n;
	
	if(n==1 || n==2 || n==3 || n==4 || n==5)
	{
	    cout<<"1"<<endl;
	}
	else if (n==0)
	{
	    cout<<0<<endl;
	}
	else
	{
	    int k;
	    k=n/5;
	    if(n%5 == 0)
	    {
	        cout<<k<<endl;
	    }
	    else
	    {
	    cout<<k+1<<endl;    
	    }
	    
	}
	
	return 0;
}
