#include<bits/stdc++.h>

using namespace std; //

void remove_duplicates(vector<int> &v){

    
    int n = v.size() ; 

    int  i = 0 ; 

    for(int j = 1 ; j < n ; j ++){
        if(v[i]!=v[j]){
            i++; 
            v[i] = v[j]; 
        }
    }
    
}


int main(){
    vector<int> v = {1,2,2,3,5,5}; 
    remove_duplicates(v);
}