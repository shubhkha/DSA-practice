//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        map<string,int>mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        
        vector<int> ans;
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        
        sort(ans.rbegin(),ans.rend());
        int index = ans[1];
        for(auto it:mpp){
        if(index == it.second){
            return it.first;
                
            }
        }
        return "";
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends