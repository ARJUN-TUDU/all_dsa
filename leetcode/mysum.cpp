#include<bits/stdc++.h>
#include<iostream> 

using namespace std; //

int probl(){
    vector<int> myv; 

    for(int i = 0 ; i < 3 ; i ++){
        myv.push_back(5);
    }

    for(int i = 0 ; i < myv.size() ; i ++){
        cout<<myv[i]<<endl ; 
    }

    return 0 ; 
}




int main(){
    
    
   probl(); 
    
    vector<int> v ; 
    v.push_back(2); 
    v.push_back(3); 
    v.push_back(4);
    v.push_back(5);

    int n = v.size() ; 

    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<endl ; 
    }

    return 0 ; 
}