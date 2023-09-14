//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
    bool isPrime(int n){
       if(n<2)
        return false;
       if(n==2 || n==3){
           return true;
       }
       if(n%2 ==0 || n%3== 0)
        return false;
       for(int i=5; i*i <=n; i+= 6){
           if(n%i ==0 || n%(i+2) ==0){
               return false;
           }
       }
       return true;
   }
   int count3DivNums(long long L, long long R) {
      
       int res = 0;
       for(int i=1; i*i<=R; i++){
           int a = i*i;
           if( isPrime(i) &&( L<=a && a<=R) ){
               res++;
           }
       }
       return res;
   }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L,R;
        
        cin>>L>>R;

        Solution ob;
        cout << ob.count3DivNums(L,R) << endl;
    }
    return 0;
}
// } Driver Code Ends