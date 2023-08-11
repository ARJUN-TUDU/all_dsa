#include<bits/stdc++.h>

using namespace std; 

int problem(vector<int> &v){
    int count = 1 ; 
    int n = v.size(); 
   

    while(count<=2){
       for(int i = 0 ; i < n-1;i++){
          if(v[i]>v[i+1]){
            swap(v[i],v[i+1]); 
          }
       }
       count++ ; 
    }

    for(auto i:v){
        cout<<i<<endl ;
    }

    return v[-2]; 
}

int main(){
    vector<int> v = {2,3,5,8,1};
    cout<<v[-1];
    cout<<problem(v)<<endl ;
}

