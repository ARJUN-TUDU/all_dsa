#include<iostream>
#include<string.h>

using namespace std; 




int matrixFunction(int m = 3,int n=2){
     
     

     int counter =0 ; 

     if(n>3){
         while(n!=3){
             counter++ ; 
             n--;

         }
     }else{
        
         while(n!=3){
             n++;
             counter++;
         }
     }
     if(m>3){
         while(m!=3){
             counter++;
             m--;
         }
     }else{
         while(m!=3){
             counter++;
             m++;
         }
     }

    cout<<counter<<endl; 

}



int main(){
   matrixFunction() ;
   
   int asii = 65 ;

   char s ; 

   s = char(asii) ;
   
   cout<<s ; 

}