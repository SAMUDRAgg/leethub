//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string encryptString(string s){
 string ans;
 
 
   for(int i=0;i<s.length();i++){
       int count=1;
       while(s[i]==s[i+1]){
           count ++;
           i++;
       }
       ans+=s[i];
       ans+=to_string(count);
   }
   reverse(ans.begin(),ans.end());
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