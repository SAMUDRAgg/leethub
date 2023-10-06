//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int countWords(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<countWords(s)<<endl;
	    }
}
// } Driver Code Ends


//User function Template for C++

int countWords(string s)
{
 int w=0;
 int count=0;
 for(int i=0;i<s.length();i++){
     if((s[i]=='\\'&&s[i+1]=='n')||(s[i]=='\\'&&s[i+1]=='t')){
         w=0;
         i++;
     }else if(s[i]==' '){
         w=0;
     }else if(w==0){
         w=1;
         count++;
     }
 }
 return count;
}