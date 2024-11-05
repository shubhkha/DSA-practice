//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
        int j = 0;
        for(int i = 0; i<str.size(); i++){
            if(str[i] =='.'){
                reverse(str.begin()+j, str.begin()+i);
                j = i + 1;
            }
            else if(i == str.size() - 1)
            reverse(str.begin()+j,str.end());
        }
        reverse(str.begin(),str.end());
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends