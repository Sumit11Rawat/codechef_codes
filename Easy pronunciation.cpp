#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int count=0;
      unordered_map<char,int>m;
      m['a']++;
      m['e']++;
      m['i']++;
      m['o']++;
      m['u']++;
      bool chk=false;
      for(int i=0;i<s.size();i++){
          if(!m[s[i]]){
              count++;
          }
          else{
              count=0;
          }
          if(count>=4)
             {
                 cout<<"NO"<<endl;
                chk=true;
                 break;
             }
      }
      if(chk==false){
         cout<<"YES"<<endl;    
      }
    
      
      
  }
  return 0;

}
