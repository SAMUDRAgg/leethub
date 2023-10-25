//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int longest(int arr[],int n)
    {
      int count =1; int l=arr[0];
      for(int i=1;i<n;i++){
          if(arr[i]>=l){
         
              count++;
               l=arr[i];
          
          }
          
      }
      return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i, arr[n+5];
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout<<ob.longest( arr, n )<<endl;
    }
    return 0;
}
// } Driver Code Ends