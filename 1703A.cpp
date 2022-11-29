#include <bits/stdc++.h>
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
	    if(s=="YES" || s=="Yes" || s=="yes" || s=="YEs" || s=="yeS" || s=="YeS" || s=="yES" || s=="YeS" || s=="yEs")
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	    i++;
	}
	return 0;
}
