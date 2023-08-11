#include<iostream>
#include<bits/stdc++.h> 
#include<string>

using namespace std; 

int partition(int arr[],int l , int r){

    int pivot = arr[l];
    int i = l ; 
    int h = r ; 

    while(l<r){
            

            i++ ;
            
            
            char kyun = 0 ; 

            

            int i = 0 ; 




    }

}


void instertion_sort(){
     
    int v[5] = {1,2,0,5,3};
     int n = 5;
     for(int i = 1 ; i < n ; i ++){
        int curr = v[i] ; 
        int j = i - 1 ; 

        while(v[j]>curr && j>=0){
            v[j+1] = v[j]; 
            j--; 
        }
        v[j+1] = curr ; 

       
     }

     for(auto i : v){
        cout<<i<<" "; 
     }
}

void prob(string s,string t){
      
      for(int i = 0 ; i< t.length() ; i++){
          
      }
}

int main (){
    
    instertion_sort(); 
}