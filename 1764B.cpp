#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes hee
	int cases;
	cin>>cases;
	int i = 0;
	while(i<cases)
	{
            int size;
            cin>>size;
            
            vector<int> v;
            for(int i=0;i<size;i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            
            sort(v.begin(),v.end());
           
             int x = v[0];
             for(int i=1;i<v.size();i++)
             {
                 x = gcd(x,v[i]);
             }
            
              int largest = v[size-1];
              
              cout<<largest/x<<endl;
             
             
    
        
        
            i++;
	    
	}
	return 0;
}
