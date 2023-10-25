//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<vector>

class Solution {
public:
     bool pal(int num){
         int rem;
         vector<int> v;
         while(num!=0){
             rem=num%10;
             v.push_back(rem);
             num=num/10;
         }
         int s=0;
         int e=v.size()-1;
         while(s<=e){
             if(v[s]!=v[e]){
                 return 0;
             }
             s++;
             e--;
         }
         return 1;
     }
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(pal(a[i])==0){
    	        return 0;
    	    }
    	}
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends