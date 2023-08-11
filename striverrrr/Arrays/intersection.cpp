#include<bits/stdc++.h>
using namespace std; 


void intersection(vector<int> &v1,vector<int> &v2){
    int l1  = v1.size() ; 
    int l2 = v2.size() ; 
    vector<int> myv ; 
    int i = 0 ; 
    int j = 0 ; 

    while(i<l1 && j<l2){
        if(v1[i]==v2[j]){

            myv.push_back(v1[i]); 
            i++ ; 
            j++ ; 

        }
        if(v1[i]>v2[j]){
            j++ ;
        }
        if(v1[i]<v2[j]){
            i++ ; 
        }
    }

    for(auto i : myv){
        cout<<i<<" "; 
    }
}




int main(){
    vector<int> v1 = {1,2,3,3,4,5,6}; 
    vector<int> v2 = { 3,3,5} ; 


    intersection(v1,v2); 


    
}