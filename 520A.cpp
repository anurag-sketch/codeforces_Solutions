#include<bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence) {
        
        int arr[26] = {0};
      
      for(int i=0;i<sentence.size();i++)
      {
          sentence[i] = tolower(sentence[i]);
      }
      
        for(int i=0;i<sentence.size();i++)
        {
          arr[int(sentence[i])-97]++;
        }
        
        int i=0;
        while(i<26)
        {
            if(arr[i] == 0)
            {
                return false;
            }
            i++;
        }
        
        return true;
        
    }


int main() {
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	bool flag;
	flag=checkIfPangram(s);
	if(flag==true)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO";
	}
	
	return 0;
}
