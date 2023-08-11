#include<iostream>

using namespace std; 

void check(int arr[],int l){
    
    if(l==0){
        return ; 
    }

    
    cout<<arr[0] <<endl ; 
    cout<<"what"<<endl ;
    check(arr+1,l--); 
}

void printOrder(int n){
    if (n == 0){
        return ; 
    }
    
    printOrder(n-1);
    cout<<n<<endl;

}
int back(int arr[],int n){
    if(n==0){
        return 0 ; 
    }
    

    for(int i = 0 ; i < 10 ; i ++){

    }

}





bool isSorted(int arr[],int n){
      if(n == 1){
          return true ; 
      }
      int remArray = isSorted(arr+1,n-1); 
      if(arr[0] < arr[1] && remArray ){
          return true ; 
      }
      else{
          return false ; 
      }
}


int myfunction(int arr[],int myarr,int n){
    for (int i = 0 ; i < 10 ; i ++){

    }
}


void positioninArray( int arr[] , int n , int key ){

    if(n==1){
        return ;
    }

    if(arr[0] == key){
        cout<<"yes"<<endl ; 
    }

    positioninArray(arr+1,n-1,key) ; 



    

}
int main (){

    int arr[] = {1,2,99,4,5} ;
    int n = 5 ; 
    back(arr,n); 

}