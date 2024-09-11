//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string firstRepChar(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<firstRepChar(s)<<endl;
    }
	return 0;
}
// } Driver Code Ends


string firstRepChar(string s)
{
    //code here.
    map<char, int>mpp;
    string temp ="";
    for(int i=0; i<s.size(); i++){
        mpp[s[i]]++;
    // }
    // for(int i=0; i<s.size(); i++){
        if(mpp[s[i]] == 2){
            temp = s[i];
            break;
        }
    }
    if(temp ==""){
        temp = temp + "-1";
        return temp;
    }
    else{
        return temp;
    }
}