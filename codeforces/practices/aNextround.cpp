#include<iostream>

using namespace std; 

int dominos(int m,int n,int count){
    
    if( m == 0 ){
        cout<<count;
        return 0;
    }
    if( n == 0 ){
        cout<<count;
        return 0;
    }
    
    dominos(m-1,n-2,count+1);
    dominos(m,n-1,count+1);

}

int main(){

    cout<<dominos(2,4,0);

}