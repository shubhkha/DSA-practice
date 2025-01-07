//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void leftRotate(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d%n;
        
        vector<int>temp;
        for(int i = 0; i<d; i++){
            temp.push_back(arr[i]);
        }
        
        for(int i =d; i<n; i++){
            arr[i-d] = arr[i];
        }
        
        int j=0;
        for(int  i=n-d; i<n; i++){
            arr[i]=temp[j];
            j++;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends