#include<iostream>
#include<bits/stdc++.h>



using namespace std; 

int fn(vector<int> nums){

    int n = nums.size(); 
    
    int curr = 0 ; 
    for(int i = 1 ; i < n ; i ++){
        if(nums[curr]!=nums[i]){
            curr++ ; 
            nums[curr]=nums[i] ; 
        }
    }

    return curr+1 ; 

    
    

};
int fun(vector<int>& nums , int val){
    int n = nums.size() ; //
    int curr = 0 ; //
    for(int i = 0 ; i < n ; i ++){
        if(nums[i]!=val){
            nums[curr++] = nums[i] ; 
            
        }
        cout<<curr<<"curr"<<endl ;
        
    }
    for(int i = 0 ; i < nums.size();i++){
        cout<<nums[i]<<endl ;
    }
    return curr ;

    
}

int main(){
   vector<int> v = {3,2,2,3};

   cout<<fun(v,3);
}