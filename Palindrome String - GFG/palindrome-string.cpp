//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	char a(char ch){
	    char temp;
	    if(ch>='a'&&ch<='z'){
	        return ch;
	    }else{
	        temp=ch-'A'+'a';
	    }
	    return temp;
	}
	
	int isPalindrome(string S)
	{
	    int n=S.length()-1;
	    int i=0;
	    while(i<n){
	        if(a(S[i])==a(S[n])){
	            i++;n--;
	        }else{
	            return 0;
	        }
	    }
	    return 1;
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends