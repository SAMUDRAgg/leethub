//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long long int gcd (long long a,long long b){
      if(b==0){
          return a;
      }
      return gcd(b,a%b);
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        
        long long int g=gcd(A,B);
       long long int l=(A*B)/g;
        vector<long long int> v;
        v.push_back(l);
        v.push_back(g);
       
         return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends