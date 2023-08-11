
#include<bits/stdc++.h>
using namespace std;






int gcd(int a,int b){
    if(a==0){

       return b ;


    }
    if(b == 0 ){
        return a ; 
    }
    cout<<a ; 
}


int subarrays(vector<int> v,int k){
     
     int n = v.size(); 


     for(int i = 0 ; i <= (n-k) ; i++){
        
        int max = v[i] ; 
        for(int j = i ; j <= (i+(k-1)) ; j++){
            
            if(max<v[j]){
                max = v[j];
            }
             
        }
        cout<<max ; 

        cout<<endl ; 
     }
}

string subsets (vector<char> v,string sum ){
   
    if(v.size() == 0 ){
       
       return sum;

    }

    cout<<v;

    subsets(v,sum[0]+v.substr(1));
    subsets(v,substr(1));

}

int main(){  

      deque<int> dq ; 

      dq.push_back(1);
      dq.push_back(20);


      dq.push_front(13);
      dq.push_front(220);
      dq.push_front(2204);

      for(auto i : dq){
        cout<<i<<endl ;
      }

      cout<<"====="<<endl;


      subarrays({1,2,3,4,5,6,7,8},2);

}