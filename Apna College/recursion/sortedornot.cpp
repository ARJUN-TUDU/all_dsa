#include<iostream> 

using namespace std ; 


bool check(int arr[],int curr,int n){

    cout << arr[curr]<< endl ; 
    cout << arr[curr-1] << endl ; 
    

    if (arr[curr-1] > arr[curr]){
        cout << "not sorted" << endl ; 
        return false ; 
    }
    check(arr,curr+1,n); 

    return true ; 

    
    

    

}

int main () {

   int arr[10] ; 
   
   int count = 0 ; 

   while (count < 10){
       cin >> arr[count] ; 
       count ++ ; 
   }

   int n = sizeof(arr)/sizeof(arr[0]) ;

   for(auto i : arr){
       cout << i << "myarr" << endl ; 
   }

   cout << check(arr,1,n) <<"answer"<< endl ;


}

