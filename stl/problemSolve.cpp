
#include<bits/stdc++.h>

using namespace std; 

vector<int> myloop(int i , int right){
    vector<int> v ; 
     for(int k = i ; k < right ; i++){

        v.push_back(k) ; 

     }

     return v ; 
}

int problem(vector<int> &v){
    int n = v.size(); 
      sort(v.begin(),v.end());

    for(int i = 0 ; i < n ; i ++){
        cout<<v[i]<<endl ; 
    }
    
    return 0 ; 
}

int theProblme(vector<int> &nums){

     int  n = nums.size() ;
     int i = 0 ; 
     vector<int> answer(3);

     for(int i = 0 ; i < n-1 ; i++){
        int curr = nums[i];
        int left = i+1 ;
        int right = n-1; 
       
        cout<<left<<"left"<<endl ; 
        cout<<right<<"right"<<endl ; 
        while(left<right){
            if (curr+nums[left]+nums[right] == 0){
           
                 answer.push_back(nums[curr]);
                 answer.push_back(nums[left]);
                 answer.push_back(nums[right]);

            }
            left++;
            right--;
        }
     }

     for(int i = 0 ; i < 3 ; i++){

        cout<<answer[i]<<endl ; 
     }
}

int fibo(int n){
    int a = 0 ; 
    int b = 1 ; 
    
    cout<<a<<endl;
    cout<<b<<endl ;
    while(n>0){
        int c = a+b ;
        a = b ; 
        b = c ;
        
        cout<<c<<endl ;
        n--;
    }
    return 0 ;
}

int main(){
    
    vector<int> v2 ;
    int n = 6;

    for(int i = 0 ; i < n ; i++){
        int newe ;
        cin>>newe ; 
        v2.push_back(newe);
    }
    theProblme(v2);
}