#include<bits/stdc++.h>
using namespace std;
void frequencySort(string s) {
       vector<int> v(26,0);
       string ans = "";
       for(auto i : s){
           v[i-97]+=1 ;
       }

       for(int i = 0 ; i < v.size();i++){
         cout<<i<<" = "<<v[i]<<endl ;
       }

       

     
       
    }


bool check(string s){
   map<char,int> map ;

   for(auto i : s){
    map[i]+=1 ;
   }

   int k = 0; 

   for(auto i : map){
    if(map[s[0]]!=i.second){
      return false ;
    }
   }

   return true ; 
}
 void change(string s){
   int n = s.size();

   for(int i = 0 ; i < n ; i ++){
      if(s[i]-0>=97){
       char new_s = s[i]-32 ; 
       s[i] = new_s;
      }
   }

   cout<<s;
 }


void frequency(string s){
   vector<int> v(26,0);

   for(auto i : s){
      v[i-97]+=1;
      
   }

   int max = 0 ;  
   char ans = 'a';
   
   for(int i = 0 ; i < v.size(); i++){
      if(v[i]>max){
         max = v[i];
         ans = i+97;
      }
   }
   
   cout<<ans;



}

void max(string s,char digit){
   int n = s.size();
   string mystring = s ; 
   int max = 0 ;

   for(int i = 0 ; i < n ; i++ ){
      if(s[i]==digit){
         mystring.erase(i,1);

         int new_n = stoi(mystring);

         if(max<new_n){
            max = new_n ;
         }
         mystring = s ;
      }
   }

   cout<<max;

}


int sum_two(int n){
    
    int sum = 0 ;

    while(n>0){
      int rem = n%10;
      sum+=rem ;
      n = n/10 ;
    }

    return sum ;

}


int function3(vector<int> nums){ 
    
    int sum1 = 0 ; 
    int sum2 = 0 ;
    for(auto i : nums){
      sum1+=i ; 
      
    }

    for(auto i:nums){
       sum2+=sum_two(i);
    }
    if(sum1>sum2){
      return sum1-sum2;
    }else{
      return sum2-sum1;
    }
     
   
  
}



bool search(vector<int>& nums, int target) {
        int l = 0 ;
        int r = nums.size()-1;

       

        while(l<r){
            
             int mid = l+(r-l)/2 ;

             if(nums[mid]==target){
               cout<<mid<<"<=answer";
                 return true ;
             }

             if(nums[l]<=nums[mid]){
                cout<<l<<" left   "<<mid<<" <=mid" <<endl ;
                 if(target<=nums[mid-1] && target>=nums[l]){
                     r = mid-1;
                 }else{
                  l = mid+1;
                 }
             }else{
               cout<<l<<" right "<<mid<<"   <=mid"<<endl ;
                 if(target>=nums[mid+1] && target<=nums[r]){
                     l = mid+1;
                 }else{
                    r =mid-1;
                 }
             }


        }
        return false ;
    };

vector<int> search(){
   vector<int> v ;
   vector<int> path ;
   int key = 20 ;

   int l = 0 ; //
   int r = v.size();

   while(l<r){
      int mid = l+(r-l)/2 ; //

      if(v[mid] == key){
         return path;
      }

      if(v[mid]<key){
         l = mid+1;
      }else{
         r = mid-1;
      }





   }
}

vector<int> search_path (vector<int> v , int l , int r , int key , vector<int> path){
    

    int mid = l+(r-l)/2 ; 


    if(v[mid] == key){
       return path ;
    }

    if(v[mid]<key){       
        return search_path(v,mid+1,r,key,path); 
    }
    else{
      return search_path(v,l,mid-1,key,path);
    }



}


void back_track(vector<int> show ,int l){
    
    if(l>50){
      return ;
    }
     

    if(l%2 > 0){
      cout<<l<<endl ;
    }

   back_track(show,l+1);
   back_track(show,l+2);
   

}


void roman_toint(string str){
     
     map<char,int> map ; 
     
     map['I'] = 1 ;
     map['V'] = 5 ; 
     map['X'] = 10 ;
     map['L'] = 50 ;
     map['C'] = 100; 
     map['D'] = 500 ;
     map['M'] = 1000;
     
     int sum= 0 ;
     for(int i = 0 ; i < str.size()-1 ; i++){
          
           if(map[str[i]] > map[str[i+1]]){
            
               
           }
          
     }

     



}


int searchx(vector<int> v){
    
    int n = v.size();
    int l = 0 ; 
    int r = n-1 ; 

    while(l<=r){
      int mid = l+(r-l)/2 ; 

      if(v[mid+1]<v[mid] && v[mid]>v[mid-1]){
         return mid ; 
      }

      if(v[mid]>v[l]){
            l = mid+1 ; 
      }else{
         r = mid-1; 
      }
    } 


}


int smallest(vector<int>v){
   int l = 0 ; 
   int n = v.size();
   int r  = n-1 ; 

   while(l<=r){
      int mid = l+(r-l)/2;

      if(v[mid+1]>v[mid] && v[mid-1]>v[mid]){
         return mid ; 
      }

      if(v[mid]>v[l]){
         l = mid+1;
      }else{
         r=mid-1;
      }
   }
}

    int searchy(vector<int>& nums, int target) {
        int l  = 0 ;
        int r = nums.size()-1 ; 

        while(l<=r){
            
            int mid = l+(r-l)/2 ; 

            if(nums[mid] == target){
                return mid ;
            }

            if(nums[mid]>nums[l]){
                if(nums[mid]>=target && nums[l]<=target){
                    r = mid -1 ;
                }else{
                    l = mid+1;
                }
            }else{
                   if(nums[mid]<=target && nums[r]>=target ){
                       l = mid + 1; 
                   }
                   else{
                       r = mid - 1; 
                   }
            }

        }
    };

int search_y_II(vector<int> nums){

   vector<int> result ;

   for(auto i : nums){
       
       string sum = "";
       stringstream ss ;

       int rem = i%10 ;
       ss<<rem ;
       sum = sum + ss.str() ;
   }
}


void cc2 (){
   map<char,int> map ; 

   string str = "abab" ; 
   int n{3};
   for(auto i : str){
      if(!map[i]){
         map[i] = 1 ;
      }else{
         map[i]++;
      };
   }

  
   for(int i = 0 ; i < map.size() ; i ++){
      cout<<map[i]<<"   dwad  "<<endl ; 
   }

   cout<<n<<" <="<<endl ; 
   
}


void output ( vector<pair<int,int>> nums1 ,vector<pair<int,int>> nums2){

     map<int,int> map ; 


     for(auto i : nums1){
        
        for(auto j : nums2){
           if( i.first == j.first ){
              int key = i.first ; 
              int val = i.second + j.second ;
              if(!map[key]){
                 map.insert({key,val});
              }else{
                 map[key] += val ; 
              }
        }

 
     } 



     for(auto i : map){
        cout<< i.first << " = > " << i.second <<endl ; 
     }

}}


int male (vector<int>nums){
         int l = 0 ; 
         int n = nums.size();
         while(l<n){
            
            int left_sum = 0 ; 
            int right_sum = 0 ; 
            if(l==0){

                left_sum = 0 ;


            }else{
                for(int i = l-1 ; i >=0 ; i-- ){
                left_sum = left_sum + nums[i]; 
            }
            }

            for(int i = l+1; i< n ; i++ ){
                right_sum = right_sum + nums[i];
            }

            if(left_sum == right_sum){
                return l;
            }
            l++;
         }

         return -1;
}

void section_sum(vector<int> v){

   for(int i = 0 ; i < v.size() ; i ++){
      
   }
}

int printSum (vector<int> nums){

       int main_sum = 0 ; 
       int l = 1 ;
       int sum  = 0 ; 


       for(auto i : nums){
          main_sum+=i;
       }

       


       while(l<nums.size()){
           
           int r = 0; 

           sum = sum+nums[l-1];

           r = main_sum-nums[l]-sum;


           cout << sum << " sum  "<< l<<endl ; 
           cout<< r << "   r"<<endl ; 

           if(sum == r){
            
            return 1;
           }

           l++;

       } 

       return 0 ; 

}


int pair_game(string s1 , string s2){
    
    vector<pair<char,char>> map ; 

    int i = 0 ;
    int n = s1.length() ;


   

    while(i<n){        

        char curr1 = s1[i];
        char curr2 = s2[i];

         
    }

}


void ansswer(vector<string> v, int left , int right){
    
    vector<char> vowels = {'a','e','i','o','u'}; 
    int ans = 0 ;
    
    for(int i = left ; i<= right ; i++ ){
          
         string curr = v[i];

         int l = curr[0];
         int r = curr[1]; 

         for(int i = 0 ; i < vowels.size() ; i++ ){

           if(vowels[i] == l){
               
               cout<<i<<"<=l"<<endl;
               ans ++;
              
           }if(vowels[i] == r){
            cout<<i<<"<=r"<<endl; 
            ans++ ; 
           }
           
           
         }
   
    }

    cout << ans/2 ; 

}



void pass_the_pillow(int n , int time){

     int count = 1 ;
     if(n<time){

      while(count!=n){
             
             count++ ; 

      }

     }
}

void distinct(int n )
{
   for(int i = 0; i < 10 ; i++){
       int res = n%i;
       cout<<res <<"  =>" <<n<<"/"<<i<<endl ; 
   }
}

void binary_representation(int n){

     
     string ans = "";
     map<char,int> map ; 
     vector<int> v; 


     while(n>0){
        int rem = n%2;

        if(rem!=0){
            ans = ans+'1';
        }else{
            ans = ans+'0';
        }

        n=n/2;
     }
    

  reverse(ans.begin(),ans.end()); 


  
  cout<<ans << " ans"<<endl ;

  for(auto i : ans){
    map[i] ++ ; 
  }


  for(auto i : map){
     
     cout<<i.first << " => " << i.second <<endl  ;
 
     if(i.second%2 == 0){
        v.push_back(i.second);
     }
     if(i.second%2!=0){
      v.push_back(i.second);
     }

  }


  for(auto i : v){
   cout<<i<<endl;
  }
}
   
int balanced_array(string s){

   stack<int> stack; 
   vector<int> ans;
   
   int curr = s[0]; 
   
   int count = 1; 
   for(int i = 0 ; i < s.length() ; i++){
       stack.push(s[i]);
       if(stack.top()!=s[i]){
         stack.pop();
         count++;
         if(stack.size() == 0){
            ans.push_back(count);
            count = 1; 
         }
       }
   }
   

   for(int j = 0 ; j < count ; j)

   for(auto i : ans){
       cout<<i;
       
 
       int k= 0 ; 

       int c = 10 ; 

       int p = 1000 ;

       int k = 10 ;

          }
   
   cout<<1;

}

int my_sum (int a , int b){

    int pow = 0 ;
    string main_sum = "" ;
    while(a>0 || b>0){
        
        
        int sum = a%10 + b%10+pow ;

        
         





        

    }
   



}
int voids(){

}
int balanced (string s){
      
    
      int ans = 0 ; 
      stack<char> stack ; 
      for(auto i : s){
         
         if(stack.empty()){
            cout<<ans;
            ans = 0;
         
            stack.push(i);
         }
         else{
            if(stack.top()!=i){
               stack.pop();
               ans+=1;
            }
         }
      }
}


vector<int> all_the_subarrays(vector<int> v,int k){  
     int i = 0 ;

     vector<int> ans ;
     while(i<=v.size()-k){     
      
        int j = i+(k-1);     
        int smallest = v[i];

        for(int c = i ; c<=j ; c++){      
            if(smallest>v[c]){
               smallest = v[c];
            }
        }  
        
        ans.push_back(smallest);
        
        i = i+1 ; 
        cout<<endl ; 
     }

     for(auto i : ans){
        cout<<i<< "<=" <<endl ; 
     }
}


int section(int n){
     
     for(int i = 0 ; i < n ; i ++){
         cout<<i<<endl ; 
     }

}

void capital_Baazi( string v ){

    int n = v.size(); 
    
    vector<string> ans ; 

    string mystring = ""; 

    for(int i = 0 ; i< n; i ++){
         
         mystring += v[i];
         if(v[i] == ' '){
               
               ans.push_back(mystring);
               mystring = "";

         }


    }

    ans.push_back(mystring);


    for(auto i : ans){
        
        cout<<i<<endl ; 

    }

}

int main(){
    
    capital_Baazi("aa bb cc");


   
}
      
