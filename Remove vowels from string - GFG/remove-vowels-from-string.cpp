//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
			int tolower(char ch){
	    char l;
	    if(ch>='A'&&ch<'Z'){
	        l=ch-'A'+'a';
	        return l;
	    }else{
	        return ch;
	    }
	    return 1;
	}
	string removeVowels(string S) 
	{
	    string ans;
	    
	    for(int i=0;i<S.length();i++){
	        if((tolower(S[i])!='a')&&(tolower(S[i])!='e')&&(tolower(S[i])!='i')&&(tolower(S[i])!='o')&&(tolower(S[i])!='u')){
	            ans.push_back(S[i]);
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends