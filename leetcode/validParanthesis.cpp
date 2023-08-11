#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std; 



bool prob(string mystring)
   {
    int n = mystring.length();
    stack<char> mystack ; 
    for(int i = 0 ; i < n ; i ++){
        if(curr=="(" || curr == "{" || curr = "("){
            myvector.push_back(curr);
        }
         if(mystring[i]== ")"|| mystring[i]=="}" || mystring[i]=="]" ){
               if(mystack.empty()){
                return false ; 
               }
            }
            else if(mystring[i] == ")" && mystack.top() != "("){
                return false ; 
            }
            else if (mystring[i] == "}" && mystack.top()!="{" ){
                return false; 
            }
            else if(mystring[i] == "]" && mystack.top()!="["){
                return false ; 
            } 
       }
        return true ;  
   }


int main(){

    string  the = "()[]{}"; 
    cout<<prob(the)<<endl ; 

}


