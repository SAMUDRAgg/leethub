//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends




int findElement(int arr[], int n) {
    
//     int mini[n];
//     int maxi[n];
  
//      maxi[0]=arr[0];
//       mini[n-1]=arr[n-1];
   
   
//       int l=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>l){
//             l=arr[i];
//             maxi[i]=l;
//         }
//     }
//   int s=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         if(s>arr[i]){
//             s=arr[i];
//             mini[i]=s;
//         }
//     }
//     for(int i=1;i<n-1;i++){
//         if(mini[i]==maxi[i]){
//             return mini[i];
//         }
//     }
    
    
    
    
//  return -1;
    
   
    int mini[n];
    int maxi[n];
    maxi[0] = arr[0];
    mini[n-1] = arr[n-1];
    
    int l = arr[0];
    for (int i = 1; i<n; i++){
        if (arr[i]>l)
            l = arr[i];
        maxi[i] = l;
    }
    
    int s = arr[n-1];
    for (int i = n-2; i>=0; i--){
        if (arr[i]<s)
            s = arr[i];
        mini[i] = s;
    }
    
     for(int i=1;i<n-1;i++){
        if( mini[i]==maxi[i]){
            return mini[i];
        }
    }
    return -1;

}