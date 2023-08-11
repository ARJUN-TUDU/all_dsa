#include<bits/stdc++.h>

using namespace std; 

void steps(int n){
    if(n==0){
        cout<<1<<endl ;
 
    }

    if(n<1){
        return   ; 
    }

    

    

    steps(n-1);
    steps(n-2); 


    


}


int main(){

    
   steps(8) ;
   
   
}