//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> duplicates(vector<int> arr) {
        // code here
        map<int,int>mp; 
        for (int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<int>s;
        for (auto p:mp){
            if (p.second>1){
                s.push_back(p.first);
            }
        }
        if (s.size()==0 ){
            return {-1};
        }
        else{
            return s;
        }
    }
};

//{ Driver Code Starts.

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> ans = obj.duplicates(arr);
    for (int i : ans)
        cout << i << ' ';
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}

// } Driver Code Ends