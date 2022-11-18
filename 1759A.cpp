#include<bits/stdc++.h>
using namespace std;
 
int main() {
 // your code goes here
 int cases;
 cin>>cases;
    
 
 string k;
 for(long int i=0;i<51;i++)
 {
     k.push_back('Y');
     k.push_back('e');
     k.push_back('s');
 }
    long int i=0;
 while(i<cases)
 {
     string s;
     cin>>s;
     bool flag=true;
      for(long int i=0;i<k.size()-s.size()-1;i++)
      {
          string a;
          a=k.substr(i,s.size());
          if(s==a)
          { 
              flag=false;
              break;
          }
      }
      if(flag==true)
      {
          cout<<"NO\n";
      }
      else if (flag==false)
      {
          cout<<"YES\n";
      }
   i++;    
     
 }
    
 return 0;
}
