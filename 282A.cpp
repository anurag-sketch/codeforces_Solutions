#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int i=0;
  int k=0;
	while(i<n)
	{
	    string x;
	    cin>>x;

	     if(x =="X++")
	     {
	         k++;
	     }
	     if(x == "X--")
	     {
	         k--;
	     }
	     if( x == "++X")
	     {
	         ++k;
	     }
	     if(x == "--X")
	     {
	         --k;
	     }
	     i++;
	}
	cout<<k<<endl;
	return 0;
}
