//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool commonSubseq (string a, string b)
	{
	   unordered_map<char,int> mp;
	   for(int i=0;i<a.length();i++){
	       mp[a[i]]++;
	   }
	   for(int i=0;i<b.length();i++){
	       if(mp[b[i]]!=0){
	           return 1;
	       }
	   }
	   return 0;
	}
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--) 
	{
		string a, b; cin >> a >> b;
		Solution ob;
		cout << ob.commonSubseq (a, b) << '\n';
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends