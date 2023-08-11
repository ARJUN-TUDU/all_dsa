#include<bits/stdc++.h>
using namespace std; 


void prob(vector<int> &v){

    int n = v.size() ; 

    int i = 0 ; 
    
    while(i<n){
        for(int j = i-1 ; j>=0;j--){
            if(v[i]==v[j]){
                i++; 
            }
        }
        for(int k = i+1; k < n ; k++){
            if(v[i]==v[k]){
                i++;
            }
        }
    }

    cout<<v[i]<<"ans"; 
    
}

int main(){

    vector<int>v = {};

    




    
}