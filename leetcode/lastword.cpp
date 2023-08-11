#include<iostream>
#include<string> 
#include<bits/stdc++.h>
using namespace std; 

int problem(string s){
    int n = s.size() ; 
    int count = 0 ; 
    int curr = n-1;

    while(curr>=0){
        if(s[curr]==' '){
            curr--; 
            if(count>0){
                break ;
            }
        }
        else{
            count++;
            curr--;
        }
    }
    return count ; 
}





int main(){
   cout<<problem("aa aa  ")<<endl ; 
    
}