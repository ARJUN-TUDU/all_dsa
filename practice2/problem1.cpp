#include<bits/stdc++.h>
using namespace std;




int subbarays(vector<int> v){

      int n = v.size();

      for(int i = 0 ; i < n ; i++){

          for(int j = i ; j < n ; j ++){

               for(int c = i ; c<=j ; c++){
                    
                    cout<<v[c];
               }
               cout<<endl ; 
          }

      }

}





    

int main(){
    
    vector<int> v = {1,2,3,4,6};
    subbarays(v);

}