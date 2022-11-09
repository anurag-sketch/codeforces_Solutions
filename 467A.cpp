#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	
	int n;
	cin>>n;
	int i=0;
	int count=0;
	while(i<n)
	{
	    
	    int a,b;
	    cin>>a>>b;
	    if(b-a>=2)
	    {
	      if(a<b)
	    {
	        count++;
	    }    
	    }
	    
	    i++;
	    
	}
	cout<<count<<endl;
	return 0;
}
