#include<iostream> 

using namespace std ;



int myfunction (int arr[] , int n) { 
    if (n == 0){
        return 0; 
    }
    int rest = myfunction(arr+1,n-1) ;
    cout << arr[0] << endl ; 

}

int main () {
    

    int arr[4] = {1,2,3,4} ; 
    myfunction(arr,4);  
    return 0 ;
}