//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> printPat(int n) {
        // write code here
        vector<int>ans;
      for(int i = n; i > 0; i--){
          for(int j = n; j > 0; j--){
              for(int k = 0; k < i; k++){
                  ans.push_back(j);
              }
            // ans.push_back(i);  
          }
          ans.push_back(-1);
      }
      return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        vector<int> ans = obj.printPat(n);

        // Print ans vector with space separation
        for (int num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends