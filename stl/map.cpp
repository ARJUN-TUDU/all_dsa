#include<bits/stdc++.h>
using namespace std; 


void functionss(string s){
    
   map<char,int> mymap ; 

   for(auto i : s){
      mymap[i] += 1;
   }
   
   int count = 0 ; 
   for(auto i : mymap){
     if(i.second % 2 == 0){
         
     }
   }


}

int main(){
  
    string s = "abccd";
    functionss(s);
}