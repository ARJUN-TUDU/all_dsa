#include<bits/stdc++.h>

using namespace std; 

void methods()
{
    
    // str(size,"string");
    string str(5,'b');
    

    //taking input it will take the whole string with spaces; 
    string mystr; 
    getline(cin,mystr);


    //------------------------------//
    //function
    
    //appending with another
    string s1 = "fam";
    string s2 = "ily";
    
    s1 = s1 + s2 ; 
}

void converting_to_small(string mystring){

    for(int i = 0 ; i < mystring.length() ; i++){
        char curr = mystring[i]; 
        int mycar = curr; 
        if(mycar <97){
            mycar = mycar + 32 ;
            curr = mycar ;
            mystring[i] = curr;  
        }

    }

    cout<<mystring<<endl;

}

void forming_numeric(string mystring){
    //greater<char>() to make the sort is descending order
    sort(mystring.begin(), mystring.end(),greater<char>()); 
    cout<<mystring<<endl;
}



int main(){


   string mystring = "2351"; 

   forming_numeric(mystring);
    


    



}