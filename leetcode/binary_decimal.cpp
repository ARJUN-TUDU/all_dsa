#include<bits/stdc++.h>

using namespace std; 

int convert_decimal(string binary){
     
    int curr = 1 ; 
    int n = binary.length()-1;
    int i  = 0 ;  
    int sum = 0 ; 
    while(n>=0){
        
        if(binary[n] != '0'){
           sum = sum + curr ; 
        }
        
        n--;
        curr = curr+curr;
    
    }

    return sum ;
}

string convert_binary (int n){
    stringstream ss ; 
    string sum = "" ; 

    while(n>0){

        int rem = n%2 ; 
        ss << rem ; 
        n = n / 2 ;    
        
    } 

    ss >> sum ; 
    
    int sum_size = sum.length();
    for(int i = 0 ; i < sum_size/2 ; i ++){
        swap(sum[i],sum[sum_size-i-1]);
    }
    return sum ; 
    
}


string total_sum(string a,string b){
    int a1 = convert_decimal(a);
    int a2 = convert_decimal(b); 

    int sum = a1+a2 ; 

    string answer = convert_binary(sum);

    return answer ; 
}


string main_func(string a,string b){
     string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry ; 
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';
           

           if(sum>1){
            carry = 1 ; 
           }
           else{
            carry = 0 ; 
           }
        }
        cout<<carry<<" end carry"<<endl ;
        if(carry) res += to_string(carry);
       
        return res;
    


}


string my(string a , string b ){
    int n1 = a.length()-1 ;
    int n2 = b.length()-1 ;

    int carry = 0 ; //
    int sum = 0 ;
    while(n1>=0||n2>=0){
          int sum = carry ; 
            if(n1 >= 0) sum += a[n1--] - '0';
            if(n2 >= 0) sum += b[n2--] - '0';
        

        if(sum>1){
            carry = 1; 
        }
        else{
            carry = 0 ; 
        }
    }
}



int main(){

   cout<<0%2<<endl ; 
   cout<<1%2<<endl ; 
   cout<<2%2<<endl; 
   cout<<3%2<<endl ;

   string a = "110";
   string b =  "11"; 

   cout<<main_func(a,b) ; 
    





}