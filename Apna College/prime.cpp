#include<iostream> 
#include<bits/stdc++.h>
using namespace std; 

void primes(int range){
    for(int i = 2; i <= range ; i ++){
      int flag = 1 ; 

      for(int j = 2; j < i ; j++){
        if(i%j==0){
            flag = 0; 
            break ; 
        }
      }

      if(flag==1){
        cout<<i<<endl ; 
      }
       
    } 
}

void prob(vector<int> &v){

    int n = v.size() ; 
    int cur = 0 ; 
    for(int i = 1 ; i < n ; i ++){
        

        if(v[cur] != v[i]){
            cur++ ; 
            v[cur] = v[i]; 
        }


 
    }
    for(int i = 0 ; i <= cur ; i++){
        cout<<v[i]<<endl ; 
    }

    

}


int main(){
    vector<int> v {1,2,2,3,5,5}; 
    
    prob(v);

   
}