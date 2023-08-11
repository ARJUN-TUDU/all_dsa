 #include<iostream>
#include<string>
#include<bits/stdc++.h>
 using namespace std; 

string problem(string mystring){
    if(mystring.length() == 0 ){
        return "" ; //

    }

    string rem = mystring.substr(1); 

    if(mystring[0] == rem[0]){
       cout<<"found"<<endl;
       return "" ;  
    }
    
    for(int i = 0 ; i < 10 ; i ++){
        int n ; 
        cin>> n ;  
    }

    problem(rem);

    
}

int roman(char rom ){
    if(rom == 'I'){
        return 1 ; 
    }
    if(rom == 'V'){
        return 5 ; 
    }
    if(rom == 'X'){
        return 10 ;
    }
    if(rom == 'L'){
        return 50 ; 
    }
    if(rom == 'C'){
        return 100 ; 
    }

    if(rom == 'D'){
        return 500 ; 
    }

    if(rom == 'M'){
        return 1000; 
    }
}


int roman_to_string(string mystring){
    int sum = 0 ; 
    

    for(int i = 0 ; i < mystring.length() ; i++){
         sum = roman(mystring[i]) + sum ; 
    }

    return sum ; 
}





 int main(){
   
   int a ;

   string n1 = "abcd";
   string n2 = "abcde";

   int sum1 = 0 ;
   int sum2 = 0 ; 

   for(int i = 0 ; i< n1.length() ; i++){
        char curr = n1[i]; 
        sum1 = sum1 + curr ; 
   }

   for(int i = 0 ; i < n2.length() ; i++){
    char curr = n2[i];
    sum2 = sum2 + curr ; 
   }
     
   cout<<abs(sum1-sum2);
   
 }