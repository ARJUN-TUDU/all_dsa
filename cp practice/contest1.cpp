#include<iostream>

using namespace std; 

int problem(int n,int m,int count){
    
    if(n==1 || m==1){
        cout<<"way"<<endl;
        
        return count ; 
    }

    cout<<n<<" "<<m<<endl ;

  




    
    

    
    problem(n-1,m,count);
    problem(n,m-1,count); 




}


int sum(int n){
    int sum_total = 0 ; 
    while(n>0){
        int rem = n%10 ;
        sum_total = sum_total + rem ;
        n = n / 10 ;  

    }

    cout<<sum_total;

}

int wrong_substraction(    int n    ,int counter    ){
    int main_number ; 
    
    while(n>0 && counter > 0 ){
        if(n%10!=0){
             
             n = n - 1 ;

        }
        if(n%10 == 0 ){
            n = n / 10 ; 
        }
        counter -- ; 
        cout<<n<<endl ; 
    }
    cout<<n<<"answer"<<endl ; 
}


int main(){
    
    
    sum(131);
    wrong_substraction(512,4);

}