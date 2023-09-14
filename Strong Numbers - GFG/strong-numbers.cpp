//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   long long int fact(int N){
      long long  int pro=1;
       for(int i=1;i<=N;i++){
           pro*=i;
       }
       return pro;
   }
    int isStrong(int N) {
        int rem=0;
        int sum=0;
        int num=N;
        while(N!=0){
            rem=N%10;
            sum+=fact(rem);
            N=N/10;
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
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends