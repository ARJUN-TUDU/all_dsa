#include<bits/stdc++.h>
using namespace std; 



// problem_2 ;
bool p_2(){
    
    int t ; 
    cin >> t ; 

    while(t--){
         
         int n ; 
         cin>> n ; 
          
          long long res = 1 ;
         for(int i=0 ; i < n ; i ++){
            int x  ;
            cin >> x ;
            res = res * x ;

         }

         int last_digit = res%10 ; 

         if(last_digit == 3 || last_digit == 5 || last_digit == 7){
            return true ; 
         }else{
            return false ; 
         }

    }

}

void subarrays (vector<int> v){
     
     int n= v.size();

     for(int i = 0 ;i < n ; i ++){
         
         for(int j = i ; j < n ; j++){

             for(int c = i ; c<=j ; c++){
                 
                 cout<<v[c];
                    
             }

             cout<<endl ; 
         }
     }

}

// problem_3 

int converting(){

    
             int t ;
             cin >> t ; 

             while(t--){

               int n ; cin >> n ; 
               
               int res = 0 ; 
               for(int i = 0 ; i < n ; i++){

                    int curr ; cin >> curr ; 
                    if(curr == 1){
                      res = res + pow(2,(n-(i+1)));
                    }

               }

               cout<<res; 

          


             }

             

}

vector<int> subarrays(vector<int> v,int k ){

     int n = v.size(); 

     for(int i = 0 ; i < n ; i ++){
        
         for(int j = i ; j <n ; j++ ){

            int product = 1 ; 
            for(int c = i ; c <= j ; c++){
                   cout<<v[c]<<",";
                   
            }

            if( product == k){
               cout<<"yes";
            }



            cout<<endl;
         }

         cout<<endl ; 

     }
}


int problem_( vector<int> a){
   
   vector<int> v; 
   
   for(int i = 0 ; i < a.size() ; i ++){
       
       for(int j = i ; j < a.size() ; j ++){
            
             
            int sum = 0;
             for(int c = i ; c <=  j ; c++){
           
                   sum += a[c];
             }

             v.push_back(sum);
            
             
       }
        
   }

   for(auto i : v){
      cout<<i<<endl ; 
   }

   

     

}





void splitting(vector<int> v){
    int left = 0 ;

    int the_point = 0 ;  
    for(int i = 0 ; i < v.size() ; i ++){ 
         
         left += v[i];

         int right = 0 ; 

         for(int j = i + 1 ; j < v.size() ; j ++){ 

               right += v[j];
         }

         if(right == left){
            the_point = i+1 ; 
         }

    }

    int n = v.size();
    
    int l = the_point-1 ; 
    int r = the_point ; 
    while (l>=0){
      cout<<v[l]<<"l"<<endl;
      l--;      
    }
    while (r<n){
      cout<<v[l]<<"l"<<endl;
      r++;      
    }
    
    
}


int subarrays_2(vector<int> v,int k,int my_sum){

      
      int n = v.size();

      for(int i = 0 ; i < n ; i ++){
              
              for(int j = i ; j < n ; j++){ 
                    int count = 0 ;
                    int sum = 0 ; 
                    for(int c = i ; c<=j ; c++){ 
                       
                       count++ ; 
                       sum+=v[c];
                          
                    }

                    if(count == k && sum == my_sum){
                         cout<<"yes";
                    }
              }

            
      }
      

      
      
}

//sort an array where subarray of a sorted array is in reverse order; 

int section ( ){


   int main = 100 ; 
   int secondary = 140 ; 


   for(int i = 0 ; i < main ; i ++){
      int section = 100 ;

      for(int j = section ; j <= secondary ; j ++){

      }
   }
}



int mainsss(){
    int n = 5;
    for(int i = 0 ; i < n ; i ++){

      for(int j = 0 ; j <=i ; j++){
          
          cout<<j;
      }
      cout<<endl ; 
    }

}


int piramid (){

    int n = 5 ; 

    for(int i = 0 ; i < n ; i ++){

        for(int j = (n-i) ; j >= 0 ; j--){
            
            cout<<" ";
        }

        for(int c = 0 ; c<= i ; c++){
           cout<<"*" ; 
        }

        cout<<endl ;

    }


}

void mainss(string input,string output){
     

     if(input.empty()){
        cout<<output<<endl ; 
        return ; 
     }



     mainss(input.substr(1),output+input[0]);
     mainss(input.substr(1),output);

}

void problemss(string the_string){

       int i = 0 ; 
       int n = the_string.length();

       int starting = 0; 
       int ending = 0 ; 
       while(i<n){
           
           int j = i+1 ;
           while(the_string[j]!=the_string[i] && j<=n){
              j++;
              
           }
           if( j < n){
            starting = i ;
            ending = j ;
           }else{
            i++;
           }

            
               


           }

           cout<<starting;
           cout<<endl ;
           cout<<ending;
           


       }



void all_subarrays(vector<int>v,int k){

      
     int n = v.size();

     for(int i = 0 ; i<n ; i++){

        for(int j = i + 1 ; j < n ; j ++){
           
           int sum = 1 ;
           for(int c = i ; c <= j ; c++){
                
                cout<<v[c];
                sum = sum * v[c];
           }

           if(k == sum){
              cout<<"yes";
              
              return;
           }

           cout<<endl ;
        }
         
     }
    
    

    
 
}


void problem_13 (string s , string t){


   map<char,char> map ; 
   int count = 0; 

   for(auto i : s){
      map[i] = t[count];
      count++;
   }
   

   cout<<map.size();
        

}


void problem_100 (int n,int k){

    int i = 1 ;
    int step = 1; 

    vector<int> v;


    while(i<n){
      
      
      step = step+(k*i);
      
      int j = 0 ;
      int vsize = v.size();

      while(v[j]!=step && j<=vsize+1){
         j++;
      }

      if(j<=n-1){
         return ;
      }

      v.push_back(step);

      cout<<step;
      i++;


    }


}




void subseq(string input,string output){
     
     if(input.size()<=0){
        cout<<output<<endl;
        return ;
     }

     subseq(input.substr(1),output+input[0]);
     subseq(input.substr(1),output);

    

}


void subarray_1(vector<int> input){


   int n = input.size(); 

   for(int i = 0 ; i < n ; i ++){
        
        for(int j = i ; j < n ; j ++){
           
           int start = input[i];
           int end  =0  ;
           for(int c = i ; c <= j ; c++){
                 end = input[c];
                 
                 
                 cout<<input[c];
                
           }
           if(input[start]>input[end]){

           }
           

           cout<<endl ; 
        }
   }
}


void removes(string mystring,string carry){
     
     if(mystring.length()<=0){
      cout<<carry<<endl;
      return;
     }

     removes(mystring.substr(1),carry+mystring[0]);
     removes(mystring.substr(1),carry);
}


void stringssss(){

     int a = 'a';
     cout<<a;



}


void main_s(int n,string turn){


   if(n<=0){
      return;
   }
   

   cout<<n<<turn<<endl ; 

   main_s(n-1,"first");
   main_s(n-2,"second");
   
}

int main(){

     vector<char>v ; 

     for(int i = 97 ; i <= 121 ; i++){
         
         char curr = i;
         cout<<curr;
         v.push_back(curr);
     }

     for(int i = 0 ; i <= v.size() ; i++){
      cout<<i<<" "<<v[i]<<endl; 
     }
   
    

}