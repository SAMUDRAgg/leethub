//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    
	    
	    long long int pre=1;
	    long long int suf=1;
	    long long maxi=INT_MIN;
	    for(int i=0;i<arr.size();i++){
	        if(pre==0) pre=1;
	        if(suf==0) suf=1;
	        pre*=arr[i];
	        suf*=arr[n-1-i];
	        maxi=max(maxi,max(pre,suf));
	    }
	    return maxi;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends