#include<bits/stdc++.h>

using namespace std; 

string functions(string mystring,string sumstring){

    if ( mystring.length() == 0){
        return ""; 
    }

    

    string remString = mystring.substr(1);

    cout<<sumstring<<endl ;

    functions(remString,sumstring+remString);
    functions(remString,sumstring);
}

bool isSorted(int arr[],int n){
    
    if(n == 1){
        return true; 
    }

    int remArray = isSorted(arr+1,n-1); 

    return(arr[0]<arr[1]  && remArray) ; 

 


    
}


bool isSecondSort(int arr[],int point , int n){
    if(point == n+1 ){
        return true ; 
    }

    isSecondSort(arr,point++,n);

    if(arr[1]<arr[0]){
        return false ; 
    }
    cout<<arr[point]<<endl ; 
}


bool sorted(int arr[],int point , int n ){
    if (point == n ){
        return true ;
    }
    cout<<arr[point]<<endl ; 
    if(arr[point]>arr[point+1]){
        return false ;
    }

    sorted(arr,point+1,n);
}

int main(){
    

    int arr[] = {1,2,0,3,5};
   
    isSecondSort(arr,0,5);

       

}