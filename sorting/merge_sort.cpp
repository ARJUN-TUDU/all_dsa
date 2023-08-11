#include<bits/stdc++.h>

using namespace std ; 




void prob(vector<int> &v){
     
    int n = v.size() ; 
    int i = 0;
    int max = 0 ; 
    int count = 0 ;  
    while(i<n){
        if(v[i]==1){
            count++;
        }
        else{
            if(count>max){
                max = count ; 
            }
            count = 0 ; 
        }
        i++;
        
    }
    if(count>max){
        max = count ; 
    }
    cout<<max<<" answer"<<endl ;
}

void sub_sum(vector<int> &v,int k){
    int n = v.size(); 
    int i = 0 ; 
    int sum = 0 ; 
    int max = 0 ; 
    int count = 0 ;
    vector<int> myv;
    while(i<n){
        if(sum==k){

             if(count>max){
                max = count;
                count= 0; 
                sum=0;
             } 


        }
        if(sum>k){
             count = 0 ; 
            sum = 0 ; 
        }
        sum = sum + v[i]; 
        count++;
        i++;
    }
    cout<<max;
    
}




int main(){
   for(int i = 5 ; i >= 1 ; i--){
    cout<<i<<" " ; 
   }
   
}