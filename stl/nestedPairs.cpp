#include<bits/stdc++.h>
#include<map>

using namespace std; 

void vectors(){
    vector<int> v ; 
    

    // push - 
    v.push_back(1); 

    // pair_vector 

    vector<pair<int,int>> pair_vector ; 

    pair_vector.push_back({1,2});
    pair_vector.push_back({2,3});


    //initizalizing with values 
    // (  size  ,   starting with values   )
    vector<int> v2(5,20);


    // iterator ; 

    
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
       // we cant make output the pairs in vectors,
       //we have to use first and second operators ,
       for(pair<int,int> i:myvector){
        cout<<i.first<<endl ; 
        cout<<i.second ;
       }
  
}


void iterators(){

   vector<int> v ; 

   // initialize

   // iteratior {i} points to the {address} of the element ; 
   vector<int> :: iterator i = v.begin(); 
   vector<int> :: iterator j = v.end();  // this v.end points to the !!!!empty!!! portion of the empty 
                                        //space after the array ends ; 
    
   
   // to iterate to move through the vector  
   i++ ;
   //or
   i=i+2;

   // to access the element of current {i} 
   int s = *(i);




}

void erase(){
    vector<int> v = {1,2,3,4,5};

    //(starting point, < end point)
    v.erase(v.begin(),v.begin()+2); // output = {3,4,5}

    for(auto i : v){
        cout<<i<<endl ; 
    }
}

void inserts(){
    vector<int> v ; 
    v.insert(v.begin(),300); // to insert 300  at th e begining

    v.insert(v.begin()+1,2,50); // ({position,how many values, what value})

    v.clear(); // that will do full erase 

}

void sets(){
    set<int>st ;   //// sets have different types of element , and it will have the values in
                   /// in sorted manner ; 

    auto it = st.find(3); // it will find the value 3 in the vector ; 
}  


void maps(){

    // it is similar to pairs  + no duplicates ; 
    // {key} will be in (sorted order) ; 
     
     map<int,int> m ; 
     map<int,pair<int,int>> m2 ; 


    m.insert({1,2});
    m2.insert({2,{3,4}});


    // to find the elements ; 
}

void algos(){

   vector<int> v ;


   // 1) sort - 
   int a = 0 ; 
   auto j = 2; 
   v.sort(a,b); // ({first position},{end position}) 
   ///////////////////////////////////////////


   // 2) search - 

}

int main(){
    erase();
}