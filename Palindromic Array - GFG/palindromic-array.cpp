//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/
#include<vector>
class Solution {
public:

int check( int n){
    vector<int> a;
    int rem=0;
    while(n!=0){
        rem=n%10;
        a.push_back(rem);
        n=n/10;
    }
    
       int s=0;
    	int e=a.size()-1;
    	while(s<e){
    	    if(a[s]==a[e]){
    	        s++;
    	        e--;
    	    }
    	    else{
    	        return 0;
    	    }
    	}
    	return 1;
}


    int PalinArray(int a[], int n)
    {
        int count =0;
        
        for(int i=0;i<n;i++){
            if(check(a[i])!=1){
                count++;
            }
        }
        if(count>0){
            return 0;
        }else{
           return 1; 
        }
        
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