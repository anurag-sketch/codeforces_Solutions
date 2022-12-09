#include<bits/stdc++.h>
using namespace std;




int main() {
	// your code goes here
	
	int cases;
	cin>>cases;
	int i=0;
	while(i<cases)
	{
	   int types;
	   cin>>types;
	   
	   vector<int> arr;
	   
	   for(int i=0;i<types;i++)
	   {
	       int x;
	       cin>>x;
	       arr.push_back(x);
	   }
	   
	   if(types==1 && arr[0]==1)
	   {
	       cout<<"YES"<<endl;
	   }
	   else if(types==1 && arr[0]>1)
	   {
	       cout<<"NO"<<endl;
	   }
	   else
	   {
	      sort(arr.begin(),arr.end());
	      if(arr[arr.size()-1] == arr[arr.size()-2])
	      {
	          cout<<"YES"<<endl;
	      }
	      else if((arr[arr.size()-1] - arr[arr.size()-2]) == 1)
	      {
	          cout<<"YES"<<endl;
	      }
	      else
	      {
	          cout<<"NO"<<endl;
	      }
	      
	   
	   }
	   
	   i++;
	}
	return 0;
}
