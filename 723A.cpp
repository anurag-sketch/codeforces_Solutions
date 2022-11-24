#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int> v;
	
	for(int i=0;i<3;i++)
	{
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
	sort(v.begin(),v.end());
	
	int ans;
	ans = (v[1] - v[0]) + (v[2] - v[1]);
	cout<<ans;
   
	
	
	return 0;
}
