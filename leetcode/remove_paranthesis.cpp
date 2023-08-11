#include<bits/stdc++.h>

using namespace std; 

void prob(string theString){
    string paranthesis = "()";
    string mystring = "";
    int n = theString.length();
    stack<int> mystack ; 
    int i = 0 ;
    while( i < n ){
        
       if(theString[i]=='('){
           if(mystack.size()>0){
              mystring+='(';
           }
           mystack.push(theString[i]);
       }
       else{
          mystack.pop();
          if(mystack.size()>0){
            mystring+=')';
          }
       }
       i++;
    }

    cout<<mystring;
    
   

}


int main(){
    string mystring = "((()))(()())";
    prob(mystring);
    
}