//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int arr[], int n){
    int one_s = 0 , sum =  0 ,  maxi = 0;

    for(int i = 0 ; i< n ; i++){

        if(arr[i]==1){

            one_s++;

        }

    }


    for(int i = 0 ; i<n ; i++){

        if(arr[i]==0){

            arr[i] = 1;

        }else{

            arr[i] = -1;

        }

    }
 

    for(int i  = 0 ; i<n ; i++){

        sum = sum + arr[i];

        if(sum<0){

            sum = 0;

        }

        maxi = max(sum , maxi);

    }

 

    return  (maxi+one_s);
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends