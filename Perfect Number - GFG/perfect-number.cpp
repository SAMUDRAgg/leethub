//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int fac(int n){
      int f=1;
      for(int i=1;i<=n;i++){
          f*=i;
      }
      return f;
  }
    int isPerfect(int N) {
        int num=N;
        int rem=0;
        int sum=0;
        while(N!=0){
            rem=N%10;
            sum+=fac(rem);
            N/=10;
        }
        if(num==sum){
            return 1;
        }else{
            return 0;
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends