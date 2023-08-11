#include<iostream>


using namespace std;

bool even(int n){
    if (n%2==0){
        return true ;
    }
    else{
        return false ;
    }

}

int main(){

    cout<<even(8)<<endl; 

}