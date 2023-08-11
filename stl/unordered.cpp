#include<bits/stdc++.h>

using namespace std; 

void myfun(){
    unordered_map<string,int> mymap ; 

    mymap["element_first"] = 1 ;
    mymap["element_second"] = 2;  

    for(auto i:mymap){
        if(i.second==2){
            for(auto i : i.first){
            string s = "2";
                cout<<i+s;
            }
        }
    }
    
}



int main(){
   myfun();
}