#include<bits/stdc++.h> 

using namespace std; 

void rev(int l,int r,vector<int> &arr){
    while(l<r){
        swap(arr[l],arr[r]); 
        l++ ; 
        r-- ; 
    }

}





int main(){

    vector<int> v = {1,2,3,4,5,6};
    int n = v.size(); 
    int k = 3; 

    rev(0,n-1,v); 
    rev(0,k-1,v); 
    rev(k,n-1,v); 
    
    
    
    for(auto i : v){
        cout<<i<<","; 
    }
    

}