#include<bits/stdc++.h> 

using namespace std; 


//using set :::::::::::
void prob(vector<int> marray,vector<int> narray ){
    set<int> myset ; 
    for(int i = 0 ; i < marray.size() ; i ++ ) {
            
            myset.insert(marray[i]) ; 

     }
     for(int i = 0 ; i < narray.size() ; i ++ ) {
            
            myset.insert(narray[i]) ; 

     }

     for(auto i : myset ) {
        cout<<i<<" "; 
     }
}

//using two pointer :::::::::::
void prob_2(vector<int> m_array , vector<int> n_array){

     int i = 0 ; 
     int j = 0 ; 
     vector<int> myvector ; 
     int m = m_array.size() ;
     int n = n_array.size() ; 

     while(i<m && j <n){
        
        if(m_array[i]<n_array[j]){
            myvector.push_back(m_array[i]);
            i++ ; 
            
        }
        if(m_array[i]>n_array[j]){
            myvector.push_back(n_array[j]); 
            j++ ; 
        }

     }


     for(auto i:myvector){
        cout<<i<<" "; 
     }

}

void two_pointers(vector<int> &v1 ,vector<int> &v2){
    int n1 = v1.size(); 
    int n2 = v2.size() ; 

    vector<int> myv ; 

    int i = 0  ; 
    int j = 0 ; 
     

    while(i<n1 && j < n2 ) { 
         if(v1[i] == v2[j]){ 
            i++; 
            j++ ; 
            myv.push_back(v2[j]); 
           
         }
         if(v1[i]<v2[j]){ 
            if(myv[-1]!=v1[i]){ 
                myv.push_back(v1[i]);
                  
            }
            i++ ; 
         }
         if(v1[i]>v2[j]){
            if(myv[-1]!=v2[j]){ 
                myv.push_back(v2[j]);
            }
            j++;
         }


    }

    for(auto i : myv){
        cout<<i<<" "; 
    }
    cout<<1<<endl ;
    cout<<1;
}


int main(){
    
    vector<int> m = { 1,2,3,4,5} ; 
    vector<int> n = {2,3,4,4,5}; 

    two_pointers(m,n); 
}