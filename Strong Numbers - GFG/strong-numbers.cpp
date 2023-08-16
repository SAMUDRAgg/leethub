//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  int fac(int N){
      int f=1;
      for(int i=1;i<=N;++i){
          f*=i;
      }
      return f;
  }
    int isStrong(int N) {
       int num=N;
      int sum=0;
       int rem=0;
       while(N!=0){
       rem=N%10;
      sum+=fac(rem);
       N=N/10;
           
       }
      if(sum==num){
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
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends