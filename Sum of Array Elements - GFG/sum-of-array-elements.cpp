//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

//Complete this function

int sumElement(int arr[],int n)
{
    int sum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(maxsum<sum){
            maxsum=sum;
        }
        else if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}




//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<sumElement(arr,n)<<endl;
	    
	}
	return 0;
}
// } Driver Code Ends