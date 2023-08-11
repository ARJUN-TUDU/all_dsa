#include<bits/stdc++.h> 

using namespace std; 

bool check(vector<int> &v ){
    for(int i = 0 ; i < v.size()-1;i++){
        if(v[i]>v[i+1]){
            return false; 
        }
    }
    return true ; 
}
void move(vector<int> &v){
    
    int n = v.size() ; 
    int arr[n]; 
    int k = 0 ; 
    
    for(int i = 0 ; i < n ; i ++ ){
         if(v[i]!=0){
           arr[k] = v[i] ; 
           k++ ; 
         }
    }

    

   while(k<n){
    arr[k] = 0 ;
    k++; 
   }

   for(auto i:arr){
    cout<<i<<endl ;
   }

}

void move_second(vector<int> &v){
    int n = v.size() ; 
    
    for(auto i : v){
        cout<<i<<endl ;
    }
}


int main(){
      vector<int> v = {0,1,0,3,12}; 
      move_second(v); 
     
      
}