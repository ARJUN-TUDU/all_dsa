#include<iostream>
#include<bits\stdch++>

using namespace std; 
 
int factorial(int n){
    if(n==0){
        return 1 ; 

    }
    
    int p = factorial(n-1);
    cout<<"------"<<endl ;
    cout<<p<<endl ;
    return n*p;
}



int secondSum(int n){
    if(n == 0 ) {
        cout<<"end"<<endl ;
        return 0 ; 
    }
    cout<<n<<endl ;
    int prevSum = secondSum(n-1);
    cout<<prevSum<<"answers"<<endl; 
    

    int  j = 0 ; 

    return n + prevSum ;

}

int thirdSum(){ 
    int j = 0 ; 
    int k = 0 ; 

    for(int i = 0 ; i < n ; i ++){
        int k = 0 ; 
        int p = 1 ;

        for(int k = 2000;i< 230000; i++){
            cout<<1<<endl ; 
        }
    }
}


 int main (){

     cout<<factorial(3)<<endl ;

 }



