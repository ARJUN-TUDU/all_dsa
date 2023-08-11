#include<bits/stdc++.h> 

using namespace std; 

int search(vector<int> &v , int target){
    int left = 0 ;
    int right = v.size()-1 ; 

    while(left<=right){
        int mid = 1+(right-left)/2 ;
        if(v[mid]==target){
            return mid ; 
        }
        else if(target>v[mid]){
            left = mid+1 ; 
        }
        else{
            right = mid-1; 
        }
    }
    return 0 ; 
}

int main(){
    vector<int> myv = {1,3,4,5}; 
    cout<<search(myv,5); 

}