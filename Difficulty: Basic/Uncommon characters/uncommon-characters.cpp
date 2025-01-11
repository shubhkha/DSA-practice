//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string uncommonChars(string& s1, string& s2) {
        // code here
        map<char,int>mpp;
        string ans = "";
        
        for(char i:s1){
            if(mpp[i] == 0) mpp[i]++;
        }
        
        for(char i:s2){
            if(mpp[i]==0) mpp[i]--;
            
            if(mpp[i] == 1) mpp[i]++;
        }
        
        for(auto it: mpp){
            if(it.second == 1 || it.second == -1){
                ans += it.first;
            }
        }
        if(ans == "") return "";
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A;
        cin >> B;
        Solution ob;
        cout << ob.uncommonChars(A, B);
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends