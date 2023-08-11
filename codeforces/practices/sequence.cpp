#include<iostream> 

using namespace std ;


void myfunnction () {
    int arr[] = {3,1,4,1,5,9,2} ;
    int n = 7 ; 
    int myarr[n] ;

    int left = 0 ; 
    int right = n - 1 ;

    myarr[0] = arr[0] ;  

    for (int i = 0 ; i < n ; i++){

        cout << arr[left] << "left" << endl ;
        cout << arr[right] << "right" << endl ; 
        if (i%2 == 0){
            myarr[left] = arr[i] ; 
            left ++ ;
        }else{
            myarr[right] = arr[i] ; 
            right = right - 1 ; 
        }
    }


    for (auto i : myarr){
        cout << i << endl ; 
    }

}


int main () {

    myfunnction ();
    
    
    }