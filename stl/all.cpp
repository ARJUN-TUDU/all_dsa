#include<bits/stdc++.h>

using namespace std; 


void pairs(){ 

    pair<int,string> p ; 
    
    p = {1,"abc"};

    // array of pairs ; 
    pair<int , int> p_array[3] ;
    //inserting elementes;  
    p_array[0] = {1,2} ; 
    p_array[1] = {2,5};
    p_array[2] = {5,6} ; 
    //to print this array of pairs ; 
    for(int i = 0 ; i < 3 ; i ++){
        cout<<p_array[i].first<<endl ; 
    }


    //another pair ; 
    pair<int,int> p_secondarray[5] ; 
     
    //taking input in this pair ; 
    for(int i = 0 ; i < 5 ; i ++){
        p_secondarray[i].first = i ; 
        p_secondarray[i].second = i+5 ;
    }

    //priting this pair ; 

    for(int i = 0 ; i < 5 ; i ++){
        cout<<p_array[i].first<<"first"<<endl ; 
        cout<<p_array[i].second<<"second"<<endl;
    }

    

}

void vectors(){
    vector<int> v ; 
    int n = 10 ; 
    //making the vector ; 
    for(int i = 0 ; i < n ; i ++){
        int x ;
        cin>>x ;
    //here all the elements are sotring in the last part of the vector ; 
        v.push_back(x);
    }

    //size   complexity - o(1)
    int size = v.size(); 

    // vector with size 10 with all the values with "3" ; 
    vector<int> p2(10,3);
    
    // pop back will eleminate last element of the array ; 
    p2.pop_back();
    

    // copying the vector ; 

    vector<int>v ;
    vector<int> v2 = v ; 

    //vector with String ; 
    vector<string> v3 ; 



    

}

void pairsVector(){
    //pair vector ; 
    vector<pair<int,int>> v; 
    v = {{1,3},{2,5}}; //
    //print the vector ; 
    v[1].first ; 
    //output == 2 ;  
}


void nestedPairs(){
       
       // here we are having the vector of pairs , 
       vector<pair<int,int>> myvector ; 

       // inserting the pairs in vector ; 
       int  n = 10 ; 
       for(int i = 0 ; i < n ; i ++){
           int x , y ; 
           x = i ;
           y = i+1 ;
           
           // here we are making the pair and inserting into 
           // the vector. 
           myvector.push_back({x,y});
       }

       // outputing the vectors ; 
       for(int i = 0 ; i < n ; i ++){
        cout<<myvector[i].first<<endl ; 
       }
  
}


 
int main(){

   vector<int>aww= {1,2,3,5,5};
   int n = aww.size();
   for(int i = 0 ; i<n;i++){
    cout<<aww[i]<<endl ;
   }
  
}