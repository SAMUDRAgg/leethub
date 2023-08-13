#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
void sortt(vector<int> &arr){
    
   
    map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
        
    }
     sort(arr.begin(),arr.end(),[&](int a,int b){
         return mp[a]!=mp[b]? mp[a]>mp[b]:a<b;
     });
    
 
}


int main()
 {
	
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> arr;
	    int a;
	    for(int i=0;i<n;i++){
	        cin>>a;
	        arr.push_back(a);
	        
	    }
	    
	
	
	sortt(arr);

for(auto&it:arr){
    cout<<it<<" ";
}

cout<<endl;	
	
	}
	
	
	
	
	return 0;
}