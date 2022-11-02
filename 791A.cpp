#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int a,b;
	cin>>a>>b;
	int count=0;
	if(a!=b)
	{
       	while(a<=b)
	{
	    a=(a)*3;
	    b=(b)*2;
	     count++;
	}
		cout<<count<<endl;
	}
	else
	{
	    cout<<1<<endl;
	}


	return 0;
}
