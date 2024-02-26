#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;
     int k;
     cin>>k;
     vector<int>ans;
     for(int i=0;i<n;i++){
         int a;
         cin>>a;
         ans.push_back(a);
     }
     string s="";
     for(int i=0;i<n;i++){
         if(ans[i]%k==0){
             s+='1';
         }
         else{
             s+='0';
         }
     }
     cout<<s<<endl;
  }
return 0;
}
