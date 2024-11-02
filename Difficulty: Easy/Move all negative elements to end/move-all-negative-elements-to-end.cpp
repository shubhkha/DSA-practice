//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
          vector<int> arr1;
        vector<int> arr2;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<0)
            arr1.push_back(arr[i]);
            else
            arr2.push_back(arr[i]);
        }
        vector<int> arr3(arr2);
        arr3.insert(arr3.end(),arr1.begin(),arr1.end());
        arr=arr3;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        ob.segregateElements(nums);

        for (int x : nums)
            cout << x << " ";
        cout << "\n~\n";
    }
}
// } Driver Code Ends