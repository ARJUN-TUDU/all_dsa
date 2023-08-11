#include<bits/stdc++.h>

using namespace std; 


void pattern1(){
    for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j < 5 ; j ++){
            cout<<"x" ; 
            
        }
        cout<<endl ;
    }
}

void pattern2(){
    for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j < i ; j ++){
            cout<<"x";
        }
        cout<<endl ;
    }
}
void pattern3(){
    for(int i = 0 ; i <= 5 ; i ++){
       for(int j = 1 ; j <= i ; j++){
            cout<<j;
       }
       cout<<endl;
    }
}

void pattern4(){
    int count = 1; 
    for(int i = 0 ; i < 5 ; i ++){
        
        for(int j = 0 ; j <= i ; j++){
            cout<<count ; 
        }
        count ++ ; 
        cout<<endl ; 
    }
}

void pattern5(){
    for(int i = 5 ; i > 0 ; i --){
        for(int j = i; j >0;j-- ){
            cout<<"x";
        }
        cout<<endl ;
    }
}
void pattern6(){
    for(int i = 5 ; i > 0 ; i--){
        for(int j = 1; j <= i ; j ++){
           cout<<j ;
        }

        cout<<endl ; 
    }
}

void pattern7(int n){
    
    for(int i = 1 ; i<= n ; i++){
        for(int j =(n-i) ; j>0; j--  ){
            cout<<" ";
        }
        for(int c = 0 ; c <(2*i)-1 ; c++ ){
            cout<<"x";
        }
        cout<<endl ;
    }
    
}

void pattern8(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j < i ; j++ ){
            cout<<"x"; 
        }
        cout<<endl ; 
    }
}
void myprob(int n){
    vector<int> heap(0,n);
    int i = 2; 
    cout<<1<<endl ;
    while(i*i<n){

        if(heap[i]!=1){
            heap[i] = 1; 
             
             int count = 2 ; 

             while(i*count <= n){
                heap[i*count] = 1; 
                count++;
             }


        }
        i++;

    }

    for(int i = 0 ; i < n ; i ++){
        cout<<heap[i]<<endl ; 
    }

    


}

int main(){
    myprob(50);
    pattern8(4);
    
}