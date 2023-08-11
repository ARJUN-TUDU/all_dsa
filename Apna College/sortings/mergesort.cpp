#include<iostream>
#include<String.h>
using namespace std; //

void mergeSort(int n , int arr[] , int left , int right , int count){

      if(right +1 == left){
          int temp = 0 ; 
          temp = arr[left] ;
          cout << left << "      " << right << "          left          " << "right" << endl ; 
          arr[left] = arr[right]; 
          arr[right] = temp ;
         cout<< "finisheeeeeeeeeed"<< endl ; 
          return; 
      }

      int half = ((left+right))/2 ;

      cout<<left << " left=== " << endl ; 
      cout<<right << " right =====" << endl ; 
      cout<<half << " half  "<<endl ;
      cout<<" tree number   "<< count <<endl ;

      right -- ;
      left++ ; 
      
      for(int i = 0 ; i < 5 ; i ++){
              for(int j = 0 ; j < 10 ; j++){
                  cout<< "      " ; 
              }
              cout << endl ; 
          }
      
      mergeSort(n , arr,half,right, count = 1 ); 
      mergeSort(n , arr,left,half , count = 2);

     
}

void parameeter(){
    for (int i = 0 ; i < 5 ; i++){
        
    }
}


int main(){

    int arr[] = {1,2,5,9,10} ;
    int n = sizeof(arr)/sizeof(arr[0]) ;
    mergeSort(n,arr,0,n,0); 



    
    
}