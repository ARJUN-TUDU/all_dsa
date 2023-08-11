#include<bits/stdc++.h>

using namespace std; 

void solution(vector<int> &a , vector<int> &b){
    vector<int> v ; 
    int max = 0 ; 
    int n1 = a.size(); 
    int n2 = b.size(); 
    
    int i = 0 ; 
    int  j = 0 ; 
    while(i<n1 && j <n2 ){
        
        if(a[i]>b[j]) 
        {
            v.push_back(b[j]);
            j++;
        }
        else{
            v.push_back(a[i]);
            i++ ; 
        } 
    }
    cout<<i<<" answer "<<j<<endl ; 
    for(i;i<n1;i++){
        v.push_back(a[i]);
    }
    for(j;j<n2;j++){
        v.push_back(b[j]);
    }

    
    
    int n = v.size() ; 

    for(int i = 0 ; i < n ; i ++){
        cout<<v[i]<<endl ; 
    }
    
   

}




int main(){

    vector<int> a = {3,4,6,7,22,23,25} ;
    vector<int> b = {1,8,5} ; 
    solution(a,b); 


}