//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        map<char,int>mpp;
        for(int i = 0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        for(int i = 0; i<s.size(); i++){
            if(mpp[s[i]] >= 2){
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    
cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends