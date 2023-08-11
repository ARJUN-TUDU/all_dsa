#include<bits/stdc++.h>

using namespace std; 

void prob(vector<int> &a , vector<int> &b){
    int best = 0  ;
    int small = 0 ; 
    int n1 = a.size();
    int n2 = b.size();
    vector<int> myvector; 
    if(n1>n2){
        best = n1 ;
        small = n2 ;
    }
    else{
        best = n2 ;
        small = n1;  
    }

    for(int i = 0 ; i < best ; i ++){
        if(i>small){
            myvector.push_back(b[i]);
        }
        if(a[i]>b[i]){
            myvector.push_back(b[i]);
            myvector.push_back(a[i]);
        }
        myvector.push_back(a[i]);
        myvector.push_back(b[i]);
    }

}


int main(){

}