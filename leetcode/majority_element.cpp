#include<bits/stdc++.h>
using namespace std;

void problem(vector<int> &v){
    int i = 0 ; 
    
    int n = v.size() ;
    int max = 0 ; 
    while(i<n-1){
       int j = i+1; 

       while(j<n){
          if(v[j]>v[i]){
            int rem = v[j]-v[i];
            if(rem>max){
                max = rem ;
            }
          }
          j++;
       }
       i++;   
    }

    cout<<max<<" ";
    

    
}

vector<vector<int>> prob(int num){
     vector<vector<int>> myv;

     for(int i = 0 ; i < num; i++){
        int j = 0 ;
        while(j<=i){
            myv[i][j] = i+1;
        }
     }
     
}

void subarray(vector<int> &v){
    
    int n = v.size(); 

        for(int i = 0 ; i< n ; i++){
            for(int j = i ; j< n;j++){
                for(int k = i ; k<=j ; k++){
                    cout<<v[k];
                }
                cout<<endl ;
            }
            cout<<endl ;
        }
       

    };


int main(){

    vector<int> v = {7,1,4,6,3,1} ; 

    
    vector<int> v2 = {1,2,3};
    subarray(v2) ;
    
}