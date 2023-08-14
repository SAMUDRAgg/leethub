//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string s) {
	    unordered_map<char,int> exists;
  int index = 0;
  string ans;
  
  for(int i=0;i<s.length();i++){
    if(exists[s[i]]==0)
    {
      ans.push_back(s[i]);
      exists[s[i]]++;
    }
  }
  
  
  return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends