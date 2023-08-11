#include<bits/stdc++.h>

using namespace std; 


int functions(vector<int> v){
    int n = v.size() ; 

    for(int i = 0 ; i < n ; i ++){
        v[i] = v[i]*v[i];
    }

    sort(v.begin(), v.end());

    for(auto i : v){
        cout<<i<<endl ; 
    }
}

int main(){
  
  vector<int> v{-4,-1,0,3,10}; //

  functions(v);



}