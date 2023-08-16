//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int cub(int n){
      return pow(n,3);
  }
    string armstrongNumber(int N){
        int num=N;
        int rem=0;
        int sum=0;
        while(N!=0){
            rem=N%10;
            sum+=cub(rem);
            N/=10;
        }
        if(num==sum){
            return "Yes";
        }else{
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends