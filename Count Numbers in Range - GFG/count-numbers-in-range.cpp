//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
  public:
   bool isPrime(int num) {
      int i;
if(num<=1) return false;
     
      for (i=2; i<=sqrt(num); i++) {
          if (num%i==0) {
              return false;
          }
      }
      
      
          return true;
      
  }
   int count3DivNums(long long L, long long R) {
       int count=0;
       for(int i=ceil(sqrt(L)); i<=sqrt(R);i++){
           if(isPrime(i)){
               count++;
           }
           
           
       }

      return count;
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