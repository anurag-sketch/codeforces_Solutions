#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes her
	
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.size();i++)
	{
	    if(s[i] == 'H' || s[i]== 'Q' || s[i]=='9')
	    {
	        cout<<"YES";
	        flag++;
	        break;
	    }
	}
	if(flag==0)
	{
     	cout<<"NO"<<endl;	    
	}

	return 0;
}
