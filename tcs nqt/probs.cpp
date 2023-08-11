#include<bits/stdc++.h>

using namespace std; 

void prob_1_palindrom(int n){
   
    int result = 0 ; 
  ;
    int curr = n ;  
    

    while(n>0){

        int rem = n%10 ;

        result = result*10+rem ; 

        n = n/10 ; 

    }

    cout<<curr<<endl ;

}

void prob_3_givenrangeprime(int n){
    
    int heap[n] = {0}; 

    for(int i = 2 ; i <= sqrt(n) ; i ++){

        if(heap[i]==0){
            
            heap[i]=1; 
            cout<<i<<" befor"<<endl ; 
            for(int j = i*i ; j <=n;j+=i){
                cout<<j<<"rem ite"<<endl ;
                heap[j] = 1; 
               
            }
             cout<<" ----------------"<<endl ; 

        }

    }

   



}

void ap_series(int n,int a ,int d,int sum){
     
   while(n!=0){
      sum =sum+ a ;
      a =a +d ; 
      n--;  

   }

   cout<<sum<<endl ; 
}

void greates_thrre(){
    int a,b,c; 
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
            cout<<a<<endl ; 
        }
        else{
            cout<<c<<endl ; 
        }
    }
    else{
        if(b>c){
            cout<<b<<endl ; 
        }
        else{
            cout<<c<<endl ; 
        }    }

}
void rev_number(int n ){
     
    int rev = 0;  
    while(n>0){

        int rem = n%10 ; 

        rev = rev*10 + rem ; 

        n = n / 10 ; 
        
    }

    cout<<rev<<endl ; 

}

void largest_or_minimum(int n){


    int max = n%10 ; 

    while(n>0){
        int rem = n%10 ; 
        if(max<rem) max = rem ; 
        n=n/10 ; 
    }
    cout<<max<<endl ; 
}

int fibo(int n ){
  int a = 0 ; 
  int b = 1;  
  cout<<a<<endl ; 
  cout<<b<<endl ; 
  while(n>0){
       int sum = a + b; 
       b = a; 
       a = sum ; 
       cout<<a<<endl ;
       
       n--;
      
  }


   
  
}

void seive(int n ){
    int heap[n] = {0}; 

    for(int i = 2 ; i*i <= n ; i ++){
        if(heap[i]==0){
            
            for(int j = i*i ; j <=n ; j=j+i){

                heap[j]=1;

            }
        }
    }

    for(int i = 2 ; i < n ; i++){
         if(heap[i]==0){
            cout<<i<<endl ; 
         }
    }


}

void all_prime_factors(int n ){
    while(n>0){
        if(n%2==0){
            n = n / 2 ;
        }
        if(n%3==0){
            n =n / 2 ; 
        }
    }
}

int gcd(int a , int b){
   if(a>b){
     if(a%b==0){
        return b; 
    }

    gcd(b,a%b);
   }
   else{
    if(b%a==0){
        return a ;
    }
    gcd(a,b%a);
   }
}



int main(){
       seive(50);

}