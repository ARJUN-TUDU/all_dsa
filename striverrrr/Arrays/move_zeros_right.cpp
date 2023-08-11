#include<bits/stdc++.h> 

using namespace std; 

int move(vector<int> &v){

    int n = v.size() ; 
    int k = 0 ; 
    vector<int> myv ; 
    for(int i = 0 ; i < n ; i ++ ){
         if(v[i]!=0){
            myv[k] = v[i] ; 
            k++ ; 
         }
    }

    int rem = n-k ; 
         while(rem>0){
            myv.push_back(0);
            rem--;
           }

    for(auto i : myv){
        cout<<i<<" "; 
    }
    

}
void sum(){
    cout<<1<<endl ;
}
int main(){
    vector<int> v = { 1,0,2,3,0,4,0,1}; 
    move(v);
    cout<<1<<endl;
    sum();
}