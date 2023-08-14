//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    #include<map>
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        map<char,int> mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        int maxi=INT_MAX; int m=INT_MIN;
        for(auto&it:mp){
            if(it.second>m){
                m=it.second;
                
                maxi=it.first;
            }
        }
        
        
        return maxi;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends