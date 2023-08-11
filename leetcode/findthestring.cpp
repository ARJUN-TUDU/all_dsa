#include<iostream>
#include<bits/stdc++.h>

using namespace std; 

int strss(string haystack,string needle){

    int m = haystack.size() ; 
    int n = needle.size(); 

    int curr = 0; 

    while(curr<=m-n){
        cout<<curr<<"the pointer"<<endl ; 
        cout<<haystack[curr]<<endl ; 
        if(haystack.substr(curr,n) == needle){
            cout<<"hurrah"<<curr<<endl ;
            return curr ; 
        }
        curr++;
    }
    return 0 ; 
    
}


int main(){
    string haystack = "heeell";
    string needle = "ll" ; 
    

    cout<<strss(haystack,needle)<<endl ;
    vector<int> myvector = {1,3,5,7};
    int mid = myvector.size()/2 ; 
    cout<<myvector[mid];
    

   

}