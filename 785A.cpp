#include<bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
   int cases;
   cin>>cases;
    int sum=0;
    vector<string> v(cases);
    for(int i=0;i<cases;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i] == "Tetrahedron")
        {
            sum = sum + 4;
        }
        else if(v[i] == "Cube")
        {
            sum = sum+6;
        }
        else if(v[i] == "Octahedron")
        {
            sum = sum +8;
        }
        else if(v[i] == "Dodecahedron")
        {
            sum = sum + 12;
        }
        else if(v[i] == "Icosahedron")
        {
            sum= sum +20;
        }
    }
    
    cout<<sum;
}
