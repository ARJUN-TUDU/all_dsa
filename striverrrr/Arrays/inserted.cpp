 

#include<bits/stdc++.h>

using namespace std; 

void prob(vector<int>&a,vector<int>&b){

    int n1 = a.size();
    int n2 = b.size(); 
    vector<int> myv ; 
    int i = 0 ;
    int j = 0 ; 
    
    while(i>n1 && j>n2){
        if(a[i]>b[j]){
            j++; 
        }else if(b[j]>a[i]){
            i++; 
        }else{
            myv.push_back(a[i]);
            i++; 
            j++ ; 
        }

       
    }

    for(int i = 0 ; i < myv.size() ; i ++){
        cout<<myv[i]<<endl ;
    }

}

int missing(vector<int> &v){

    

}


int main(){
    vector<int> a = {1,2,3,3,5} ; 
    vector<int> b = {3,3,5} ; 

    prob(a,b); 
    
}