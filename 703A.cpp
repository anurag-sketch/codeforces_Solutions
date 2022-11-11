#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int cases;
    cin>>cases;
    int i=0;
    int count1=0;
    int count2=0;
    while(i<cases)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            count1++;
        }
        else if(a<b)
        {
            count2++;
        }
        i++;
    }
    if(count1>count2)
    {
        cout<<"Mishka";
    }
    else if(count1<count2)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }
	
	return 0;
}
