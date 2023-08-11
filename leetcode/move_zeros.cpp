#include<bits/stdc++.h>

using namespace std; 

 void moveZeroes(vector<int>& nums) {
        
       int n = nums.size();

       int i = 0 ;
       int j = 1 ; 

       while(i<n && j<n){
          if(nums[i]==0 && nums[j]!=0){
            swap(nums[i],nums[j]);
            i++;
            j++;
          }
          else if(nums[i]==0 && nums[j]==0){
            j++;
          }
          else{
            i++;j++;
          }

       }


        for(auto i:nums){
            cout<<i<<" "<<endl ;
        }
 };   

 void second_approach(vector<int>v){
    int n = v.size();
    for(int i = 0 ; i < n ; i++){
        int j = i ;
        while(j<n){
            if(v[j]>0){
                break;
            }
        }
        v[i] = v[j]; 

    }

    
 }



int main(){
    vector<int> v = {0,1,0,3,12};
    

    moveZeroes(v);


   
}