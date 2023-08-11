#include<bits/stdc++.h>

using namespace std; 

int nums(int n){
    int count = 0 ; 

    while(n>0){
         cout<<n<<" --curr"<<endl ; 
         count++; 
         n = n/10;
         
          
         
    }
    return count ;
}



int reverse(int n ){

      int result = 0 ; 

      while(n>0){
         int rem = n%10; 
         result = result * 10 + rem ;
         n = n / 10 ;  
      }
 
    return result ; 

}

bool check(int n ){
    int result = 0 ;
    int main = n ; 

    while(n>0){
        int rem = n % 10 ; 
        result = result*10 + rem ; 
        n = n/10 ; 

    }

    if(main-result == 0){
        return 1 ;
    }
    else{
        0; 
    }
}

int gcd (int a , int b){
   int rem = a%b; 

   if(rem==0){
    return b ; 
   }

    
    gcd(b,rem); 
}

int countNum(int n){
    int count  = 0 ;

    while(n>0){
        count++ ; 
        n = n/10;
    } 

    return count ; 
}



bool checkF(int n ){
    int curr = n ;
   int count = countNum(n); 
   cout<<"count"<<count<<endl ;
   int sum = 0 ; 
   while(n>0){

       int rem = n%10 ; 
       cout<<rem<<" -----lastnum"<<endl ;
       cout<<count<<"---------to the power"<<endl ;
       int power = pow(rem,count);
       cout<<power<<"---power"<<endl ; 
       sum = sum + power;
       cout<<sum<<"-------sum"<<endl ;


       cout<<"--------------"<<endl ;
       n = n/10 ;
      
   }
   cout<<sum<<endl ;
   if(sum-curr==0){
    return 1; 
   } 
   else{
    return 0 ; 
   }
}   

void all_devisor(int n){

    for(int i = 1 ; i <= sqrt(n) ; i ++){
        if(n%i == 0){
            if(i!=n/i){
            cout<< i <<" "<<n/i<<endl ;
        }
        }
        

        cout<<"||||";
    }
}

void myprob(int n){
    int heap[n]; 
    std :: fill_n(heap,n,0);
    int i = 0 ; 

    while(i*i<n){

        if(heap[i]!=1){
             
             int count = 2 ; 

             while(i*count <= n){
                heap[i*count] = 1; 
                count++;
             }


        }
        i++;

    }

    for(int i = 0 ; i < n ; i ++){
        cout<<heap[i]<<endl ; 
    }

    cout<<1<<endl  ;


}

int main(){

    myprob(50);
   
    cout<<11111;
    
  
}