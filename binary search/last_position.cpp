#include<bits/stdc++.h>

using namespace std; 

int binary(vector<int>v,int l,int r,int k){
     
    int mid = l+(r-l)/2 ; 
    
    if(l>r){
        return -1 ;
    }

    if(v[mid]==k){
        while(v[mid]==k){
            mid++;
        }

        return mid-1 ; 
    }

    if(v[mid]>k){
        return binary(v,l,mid-1,k);
    }
    if(v[mid]<k){
        return binary(v,mid+1,r,k);
    }

   
}


int main(){
    vector<int> v = {1,2,3,3,5,6,9,16,90};
    int k = 3 ;
    int r = v.size()-1;

    cout<<binary(v,0,r,k);
}