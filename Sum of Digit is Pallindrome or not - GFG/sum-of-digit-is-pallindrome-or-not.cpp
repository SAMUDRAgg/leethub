//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int pali(int N){

      int rem=0;int rev=0; int num=N;
       
        while(N!=0){
            rem=N%10;
            rev=rev*10+rem;
            N/=10;
        }
        if(rev==num){
            return 1;
        }else{
            return 0;
        }
  }
    int isDigitSumPalindrome(int N) {
        int rem=0; int sum=0;
        
        while(N!=0){
            rem=N%10;
            sum+=rem;
            N/=10;
        }
        if(pali(sum)==1){
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends