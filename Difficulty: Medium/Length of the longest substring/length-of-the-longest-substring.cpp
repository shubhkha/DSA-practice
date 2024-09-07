//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        vector<bool>count(256,0);
        int first = 0, secound = 0, leng = 0;
        while(secound < S.size()){
            
            //repeating char
            while(count [S[secound]]){
                count[S[first]] = 0;
                first++;
            }
            count[S[secound]] = 1;
            leng = max(leng, secound-first+1);
            secound++;
        }
        return leng;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends