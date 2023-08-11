#include<bits/stdc++.h>
using namespace std;


int binary_search(vector<int>v,int x,int l,int r){
       
       int mid = l+(r-l)/2;
       cout<<v[mid]<<"   l"<< l<<"    mid"<<mid<<  "    r"<<r<<endl ; 
       if(v[mid] == x){
        return mid ; 
       }

       if(v[mid] < x){
          return binary_search(v,x,mid+1,r);
       }
       if(v[mid]>x){
          return binary_search(v,x,l,mid-1);
       }

}
int lower_bound(vector<int> v , int l ,int r , int k,int max){
     
     

     
     
     int mid = l+(r-l)/2 ;
     if(l>r){
      return max;
     }

     if(v[mid]==k){
        return mid ;
     }
     

     if(v[mid]>k){
        
        return lower_bound(v,0,mid-1,k,max);
     }
     if(v[mid]<k ){
       if(max<v[mid]){
         max = v[mid];
       }
       return lower_bound(v,mid+1,r,k,max);
     }
}

int upper_bound(vector<int>v ,int l ,int r ,int x,int min){
   int mid = l+(r-l)/2 ; 
   
   if(l>r){
      return min;
   }

   if(v[mid]==x){
      return mid ; 
   }
   

   cout<<min<<"  answer"<<endl ;
   


   if(v[mid]>x){
      min = v[mid];
      upper_bound(v,l,mid-1,x,min);
   }
   if(v[mid]<x){
      upper_bound(v,mid+1,r,x,min);
   }
}
int main(){
    vector<int> v = {1,5,9,15};
    int k = 7;
    cout<<upper_bound(v,0,v.size()-1,k,0);
    cout

}