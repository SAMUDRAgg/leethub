//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     long long int  gcd(int a,int b){
         if(b==0){
             return a;
         }
         
         return gcd(b,a%b);
     }
    long long getVal(int N, int A[]) {
        long long pro=1; long long ans=0;
         long long g=A[0];
        for(int i=0;i<N;i++){
            pro=(pro*A[i])%1000000007;
            g=gcd(A[i],g);
            
        }
        
         ans=pow(pro,g);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.getVal(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends