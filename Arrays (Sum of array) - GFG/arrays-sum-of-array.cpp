//{ Driver Code Starts
#include <iostream>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int getSum(int a[], int n) {
        
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum>maxi){
                maxi=sum;
            }else{
                sum=0;
            }
        }
        return maxi;
    }   
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends