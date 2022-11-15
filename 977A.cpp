#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	int k;
	cin>>n>>k;
	int i=0;
	while(i<k)
	{
	    if(n%10 !=0)
	    {
	        n=n-1;
	    }
	    else
	    {
	        n=n/10;
	    }
	    i++;
	}
	cout<<n<<endl;
	return 0;
}
