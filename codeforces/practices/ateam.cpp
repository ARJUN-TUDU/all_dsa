#include<iostream>

using namespace std; //


bool solution(int arr[]){

    int counter = 0 ;

    for(int i = 0 ; i < 3 ; i++){
        if(arr[i]==1){
            counter++ ; 
        }

    }

    if(counter>2){
        return true ; 
    }
    else{
        return false ;
    }
}
// codeforces 80 a problem ; 
int dominos(int m,int n){
    return (m*n)/2;
}


int main(){

  int n, Petya, Vasya, Tonya , number = 0;
    cin >> n;
    while (n--)
    {
        cin >> Petya >> Vasya >> Tonya;
        if (Petya + Vasya + Tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;


   
}