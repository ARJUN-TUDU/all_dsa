#include<iostream>


using namespace std; 

void lengths(){
    string m = " adawdwa aaa  " ; 

    int n = m.size(); 
    int count = 0; 
    for(int i = m.size()-1 ; i >0 ; i--){
        if(m[i]!= ' '){
            count++ ; 
        }
        
        
        
    }

    cout<<count ; 
}


int main (){

    lengths();

}