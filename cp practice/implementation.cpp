#include<bits/stdc++.h>

using namespace std ; 


//q_1
int q_1(){
    int t;
    cin >> t;
    int count = 0 ; 

    while(t){
       string s ;
       cin>> s;
       for(auto i : s){
          if(i=='+'){
            count++;
          }
          if(i == '-'){
            count--;
          }
       }
         t--;
    }
    
    return count ; 
}


void sum (vector<int> v , int target){
      
      int l = 0 ; 
      int r = v.size();

      while(l<r){
           cout<<l<<"l  r"<<r<<endl ; 
           int sum = v[l]+v[r];

           if(sum == target){
               cout<<"got it" ;
           }

           if(target>sum){
                
                 l++;

           }
           if(sum>target){
            r -- ; 
           }

      }

}



int myfunction (){

    for(int  i = 0 ; i < 3 ; i ++){
         
         for(int j = i ; j < 3 ; j++){
              
             cout<<j;
             
         }

         cout<<endl ;
    }

}


int mains(){

}



int main(){
           
           myfunction(); 
         
}