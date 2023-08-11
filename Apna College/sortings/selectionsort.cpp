#include<iostream>
#include<bits/stdc++.h>

using namespace std ;

void selection(vector<int>& v){

    int n = v.size() ; 
    for(int i = 0 ; i < n ; i ++){
        int curr = i; 
        for(int j = i + 1 ; j < n ;j ++){
            
            if(v[curr]>v[j]){
                curr = j ;  
            }
       
        }
        
        swap(v[i],v[curr]); 

    }

    for(int i = 0 ; i < n ; i ++){
        cout<<v[i]<<endl ;
    }

}

void bubble(vector<int> &v){
     
     int n = v.size() ; 

     int count = 1 ; 
     
     // in each loop the biggest num will come to the end of the
     // beacuse of we are comparing a[i] and a[i+1] thats the
     //why i<n-counter , with counter = 1 ;
     while(count<n){ 

        for(int i = 0 ; i < n-count;i++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]); 
            }
        }
        count++ ; 

     }
}

void my_bubble(vector<int> &v,int n){
     
     int count = 1 ; 

     while(count<n){
        for(int i = 0 ; i < n-count ; i ++){
            if(v[i]>v[i+1]){
                swap(v[i],v[i+1]); 
            }
        }
        count++ ; 
     }


}




int recur_bubb(vector<int> &v,int n,int count){

    if(count>=n){
        return 0 ; 
    }
    for(int i = 0 ; i < n-count ; i++){
        if(v[i]>v[i+1]){
            swap(v[i],v[i+1]); 
        }
    }
    cout<<1;

    recur_bubb(v,n,count++);
}


void print_recurr(int n){
    if (n==0) return ; 
    cout<<n<<endl ;
    print_recurr(n-1); 
}




vector<int> squares_of(vector<int>&v){
     
     int l = 0 ;
     int r = v.size()-1 ; 
     
     vector<int>myvector ; 

     while(l<=r){

       

        if(abs(v[l])>abs(v[r])){
            myvector.push_back(v[l]*v[l]);
            l++;
        }
        else{
            myvector.push_back(v[r]*v[r]);
            r--;
        }
        
     }
    

    return myvector;
     


}

 
vector<int> probs(vector<int>&v,int k){
     
     int n = v.size(); 

    reverse(v.begin()+(n-k),v.end());
   
}
void merge(vector<int> &v,int l , int mid , int r){
    vector<int> new_vector ;
    int i = 0 ; 

    int left = l ; 
    int right = mid+1 ; 

    while(left<=mid && right <=r){
        if(v[left]>v[right]){
            new_vector[i] = v[right]; 
            i ++ ; right ++ ; 
        }
        else{
            new_vector[i] = v[left];
            i++ ; left++ ;  
        }
    } 

    for(left;left<=mid;left++){
        new_vector.push_back(v[left]); 
    }
    for(right;right<=r;right++){
        new_vector.push_back(v[right]);
    }

}

void merge_sort(vector<int> &v,int l , int r){
    
    int mid = l+(r-l)/2; 

    if(l<r){
        merge_sort(v,l,mid);
        merge_sort(v,mid+1,r); 
        merge(v,l,mid,r); 
    }

}




int main(){
    


    
  vector<int> v  = {1,25,10,2,9};
  int n = v.size(); 
  recur_bubb(v,n,1);
   
    
   

    

}