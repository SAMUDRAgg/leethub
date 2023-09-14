#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std;

void sot(vector<int>&arr){
  unordered_map<int,int> mp;
  for(int i=0;i<arr.size();i++){
      mp[arr[i]]++;
  }
  
  sort(arr.begin(),arr.end(),[&] (int a,int b){
      return mp[a]!=mp[b]? mp[a]>mp[b]:a<b;
  });
  
  
}

int main()
 {
     int t;cin>>t;
     while(t--){
         int n;cin>>n; int a;
         vector<int> arr;
         for(int i=0;i<n;i++){
             cin>>a;
             arr.push_back(a);
         }
         
     
   sot(arr);
   
   for(auto&it:arr){
       cout<<it<<" ";
   }
   cout<<endl;
     }
	return 0;
}