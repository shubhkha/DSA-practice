//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    
cout << "~" << "\n";
}
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
      int arr[26] = {0}; // THIS IS CONSTANT SPACE BY THE WAY
    
    string ans;
    
    for(int i=s.size(); i>=0; i--){
        if(!arr[s[i]-65] && s[i] != ' '){
            ans+=s[i];
            arr[s[i]-65]++;
        }
    }
    return ans;
}