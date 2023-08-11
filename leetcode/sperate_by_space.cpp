#include<bits/stdc++.h>
using namespace std; 

void functions(){
    string theString = "abc def ghf"; 

    int n = theString.size();

    vector<string> v;
    int i = 0 ;
    
    int k = 0 ;
    string rough = "" ; 
    while(k<n){


        if(theString[k] != ' '){

            rough += theString[k];

        }
        else{
            v.push_back(rough);
            rough="";
        }

        k++;
       
    }
    v.push_back(rough);

    int j = v.size()-1 ; 
    while(i<j){
        swap(v[i],v[j]);
        i++;
        j--; 
    }

    for(auto i:v){
        cout<<i<<endl ;
    }

    
}
int main(){
    functions();
}