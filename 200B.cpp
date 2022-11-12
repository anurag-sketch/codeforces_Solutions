#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int i=0;
	float sum=0;
	while(i<n)
	{
	    float a;
	    cin>>a;
	    sum=sum+a;
	    i++;
	}
	cout<<((sum)/float(n));
	return 0;
}

