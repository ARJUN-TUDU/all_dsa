#include<bits/stdc++.h>

using namespace std; 

int prob(vector<int> &v){
    int n = v.size();
    

    vector<int> arr(n+1,0);
    int ans = 0;    
    for(auto i : v){
        arr[i] = 1 ; 
    }
    
    for(int i = 0 ; i <=n ; i++){
        if(arr[i]==0){

            ans = i;  
            
        }
        cout<<i<<" " <<arr[i]<<endl ;
    }

    return ans ; 
 
    
}

vector<int> prob2(vector<int> &v1,vector<int> &v2){
     
    unordered_map<int,int> map ; 
    vector<int> myv;
    for(auto i : v1){
        map[i]++; 
    }

    for(auto i:v2){
        if(v2[i]>0){

            myv.push_back(i);
            map[i]--;

        }
    }
}

int main(){
        vector<int> v1 = {4,9,9,5};
        vector<int> v2 = {9,4,8,4}; 

        prob2(v1,v2);
}