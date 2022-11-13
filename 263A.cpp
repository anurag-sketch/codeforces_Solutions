#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int row,col;
	int arr[5][5];
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
	        cin>>arr[i][j];
	    }
	}
	int ans=0;
	int ans1=0;
	
	for(int i=0;i<5;i++)
	{
	    for(int j=0;j<5;j++)
	    {
	        if(arr[i][j] == 1)
	        {
	           ans = abs(2 - i);
	           ans1 = abs(2 - j);
	        }
	    }
	}
	cout << ans + ans1 ;
	
	return 0;
}
