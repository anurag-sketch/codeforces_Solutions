#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n;
cin>>n;

int fence;
cin>>fence;

int count=0;
int arr[n];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
for(int i=0;i<n;i++)
{
    if(arr[i]>fence)
    {
        count=count+2;
    }
    else
    {
        count++;
    }
}
	cout<<count;
	
	return 0;
}
