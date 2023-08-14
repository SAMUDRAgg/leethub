//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    // Time : O(|s|) ; |s| is length of the string s
    // Space : O(|s|)
    public:
    string encryptString(string s){
        int n = s.size();
        string ans = "";
        for(int i = 0; i < n; i++) {
            int cnt = 1;
            while(s[i] == s[i+1]) {
                cnt++;
                i++;
            }
            ans += s[i];
            ans += to_string(cnt);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
	    string s;
		cin>>s;
		Solution ob;
		string ans = ob.encryptString(s);
		cout<<ans<<endl;
	}
}

// } Driver Code Ends