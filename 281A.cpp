#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
  string s;
  cin>>s;
  
  s[0]=toupper(s[0]);
  for(int i=0;i<s.size();i++)
  {
      cout<<s[i];
  }
    
	return 0;
}
