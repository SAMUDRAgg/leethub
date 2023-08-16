//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
     vector<int> ans;
     int rem=0;
     
     while(n!=0){
         rem=n%10;
         ans.push_back(rem);
         n=n/10;
     }
     
     for(int i=0;i<ans.size();i++){
         if(ans[i]==0){
             ans[i]=5;
         }
     }
     long long out=0;
     reverse(ans.begin(),ans.end());
     
     for(int i=0;i<ans.size();i++){
         out=out*10+ans[i];
     }
     return out;
      
    
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends