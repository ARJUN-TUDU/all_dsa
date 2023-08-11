#include<bits/stdc++.h>

using namespace std; 

void prob(vector<vector<int>>& matrix,int k){
    
    int m = matrix.size();
    int n = matrix[0].size(); 

    for(int i = 0 ; i < m ;i++){
        for(int j = 0 ; j < n ; j ++){
            if(matrix[i][j]==k){
                cout<<"yes"<<endl ; 
            }
        }
    } 
    
}


void merge(vector<int> &v1,vector<int> &v2){
    int n1 = v1.size();
    int n2 = v2.size(); 
    int i = 0 ; 
    int  j = 0 ; 
    vector<int> myv ; 
    while(i<n1 && j<n2){
        if(v1[i]<v2[j]){
            myv.push_back(v1[i]);
            i++ ;
        }
        if(v1[i]>v2[j]){
            myv.push_back(v2[j]);
            j++;
        }
        if(v1[i]==v2[j]){
            myv.push_back(v1[i]);
            myv.push_back(v2[j]);
            i++;
            j++;
        }

    }
    while(i<n1){
        myv.push_back(v1[i]);
        i++; 
    }
    while(j<n2){
        myv.push_back(v2[j]);
        j++;
    }

    for(auto i : myv){
        cout<<i<<" "; 
    }
}


int main(){
   vector<vector<int>> myv = {{1,3,5,7},{10,11,
   16,20},{23,30,34,60}};

   vector<int> v1 = {1,2,3};
   vector<int> v2 = {2,5,6}; 

   merge(v1,v2); 
}