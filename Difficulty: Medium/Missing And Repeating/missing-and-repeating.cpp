//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int> arr) {
        // code here
        unordered_map<int,int>mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        
        
        int rep = 0;
        int miss = 0;
        
        for(int i = 1; i<=arr.size(); i++){
            if(mpp[i] > 1){
                rep = i;
            }
            if(mpp[i] == 0){
                miss = i;
            }
        }
        return {rep, miss};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends