#include<iostream>
#include<algorithm>
#include<string.h>


using namespace std; 
 

void swap(char a , char b){
    char s ; 

    s = a;
    a = b ;
    b = s ;
    
    }

string reverse(string mystring){


    int l = 0 ; 
    int r = mystring.length()-1 ;

    while(l<r){
        char temp ; 
        temp = mystring[l] ; 
        mystring[l] = mystring[r] ; 
        mystring[r] = temp ; 

        l++ ;
        r -- ; 
    }

    return mystring ; 

}

bool palindrome_check(string mystring){
    int l = 0 ; 
    int r = mystring.length()-1;

    while(l<r){
        if (mystring[l]!= mystring[r]){
            return false ;
        }
        l++;
        r--;
    }

    return true ; 
}

void duplicate(string mystring){
    if(mystring.length()==0){
        return  ; 
    }
    
    string s = mystring.substr(1);
    duplicate(s);
}


void stringSort(string mystring){
    int n = mystring.length() ; 
    int map[n] ; 

    for(int i = 0 ; i < n ; i ++){
        map[int(mystring[i])] += 1;
    }
    char max = int(mystring[0]) ; 
    for(int i = 0 ; i < n ; i ++){
         
    }

    for(int i = 0 ; i < int(mystring[-1])+1 ; i++){

    }
}


bool shuffle_check(string first_string,string second_string,string mystring){
     
     int n = mystring.length();

     char arr[n] ; 

     for(int  i = 0 ; i < n ; i++){
         arr[i] = mystring[i] ; 
     }
     
    
     





     
}



int main(){
   
   shuffle_check("abcdefghi") ; //

   
    

}