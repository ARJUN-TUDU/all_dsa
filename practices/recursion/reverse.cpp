#include<iostream>
#include<String.h>

using namespace std; 

string reverse(string mystring,int n) {  
       
      if(n == 0){
          return "" ; 
      }

      string remString = mystring.substr(1,n) ;


      cout << remString << endl ;  

}


int main() {

   
}