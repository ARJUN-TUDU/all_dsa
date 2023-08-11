#include<bits/stdc++.h>
using namespace std;


string functions(  string mystring  ){

    int max = 0 ;
    int n = mystring.size();

    for(int i = 0 ; i < n ; i++){

        for(int j = i ; j < n ; j++){ 

            
            string sum = "";
            for(int k = i ; k<=j ; k++){
              
                  
                   char curr = char(mystring[k]);
                   
                   sum=sum+curr; 
                   
               }
               
               int num = stoi(sum);
               if(num>max && num%2!=0){

                     max = num ; 
                  
               }

            }
        } 
        if(max==0){
            return "";
        }else{
            string ans = to_string(max);
            return ans;
        }
        
    }
    



int main(){
    string mystring = "736";
    char s = mystring[-1];
    cout<<s-'0';
}