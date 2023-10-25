//{ Driver Code Starts
// To print last duplicate element and its
// index in a sorted array
#include<bits/stdc++.h>
using namespace std;

vector<int> dupLastIndex(int arr[], int n) ;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v;
        v = dupLastIndex(a,n);
        for(int i:v)
            cout << i << " ";
        cout << endl;
        
    }
return 0;
}


// } Driver Code Ends


vector<int> dupLastIndex(int arr[], int n) {
    vector<int> v;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=n-1;i>0;i--){
        if(mp[arr[i]]!=1){
            v.push_back(i);
              v.push_back(arr[i]);
              return v;
        }
    }
   
    return {-1};
}
