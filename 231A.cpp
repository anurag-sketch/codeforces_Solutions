#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	int i=0;
	int x=0;
    while(i<test)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(arr[i]==1)
            {
                count++;
            }
        }
        if(count>=2)
        {
            x++;
        }
        i++;
    }
    cout<<x<<endl;

	return 0;
}
