//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
         vector<int> ans;
         int s=0; int c=0;
        for(int i=0;i<n;i++){
            if(key==a[i]){
                ans.push_back(i);
                c++;
            }
                
        
        }
        if(c==0){
            ans.push_back(-1);
                  ans.push_back(-1);
        }
        vector<int> v;
        
        
        v.push_back(ans[0]);
         v.push_back(ans[ans.size()-1]);
         
         return v;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends