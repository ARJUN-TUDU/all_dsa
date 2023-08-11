#include<iostream>
using namespace std; 




int swap(){

    int n = 5;
    int arr[n] = {1,2,3,4,5};
    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<endl ; 
    }
    int r = n ; 
    int l = 0 ;
    while(n>l){
        cout<<l<<"l"<<endl ; 
        cout<<n<<"r"<<endl ;
        cout<<"-----------"<<endl ; 
        int temp = arr[l];
        arr[l] = arr[n];
        arr[n] = temp ;

        l++;
        n--; 
    }
    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<endl ; 
    }
    
}

int main(){


    int n = 5 ; 
    int arr[5] = {1,2,3,4,5};
    swap();

    

}