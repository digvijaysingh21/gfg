//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for c++
class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> ans;
        int count=0;
        ans.push(-1);
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                ans.push(i);
            }
            else if(s[i] == ')'){
                ans.pop();
                if(ans.empty()){
                    ans.push(i);
                }
                else{
                    count = max(count,i-ans.top());
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}

// } Driver Code Ends