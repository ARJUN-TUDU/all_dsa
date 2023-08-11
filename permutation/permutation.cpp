#include<bits/stdc++.h> 

using namespace std; 

int factor(int n){
    if(n==1){
        return 1 ; 
    }

    return n * factor(n-1); 


}

void permutation(vector<string> & v){
    int n = v.size(); 
   
   
    for(int k = 0 ; k < n ; k++){
        int i = 0 ;
        while(i<n-1){
            int j = i + 1; 
            swap(v[i],v[j]);
            i++;
            for(auto i : v){
                cout<<i;
            }
           cout<<endl ;   
        }

        cout<<"===="<<endl ;

        
    }
   

    

}

void capital_Baazi( string v ){

    int n = v.size(); 
    
    vector<string> ans ; 

    string mystring = ""; 

    for(int i = 0 ; i< n; i ++){
         
         if(v[i] == ' '){
            if(mystring.size()!=0){
                ans.push_back(mystring);
                mystring = "";
            }
         }else{
            mystring+=v[i];
         }


    }

    ans.push_back(mystring);


    for(auto i : ans){
        
        cout<<i<<endl ; 

    }

}


int main(){
    capital_Baazi(" xabc def ghi");
}