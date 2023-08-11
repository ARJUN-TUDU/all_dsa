#include<iostream>

#include<string>

#include<algorithm> 

using namespace std; 

string example1_normal_output(){
    string mystring = "arjun";
    cout<<mystring<<endl ;
}

string example_input(){

    string mystring;
    getline(cin,mystring); 
    for(int i = 0 ; i < mystring.length() ;i ++){
        cout<<mystring[i]<<i<<endl ;
    }
    cout<<mystring<<endl;

}


string append_fun(){
    string mystring1 = "arjun" ;
    string mystring2 = "tudu";

    mystring1.append(mystring2) ;

    cout<<mystring1<<endl ; 


}


string erase_fun(){

    string mystring = "abcdefghi"; 
    int starting_point = 3 ;
    int how_many_numbers = 4 ;  
    mystring.erase(starting_point,how_many_numbers);
    
    cout<<mystring<<endl ;


}

string convert_small_big(){
    string mystring = "afrfeweGGEWS"; 

    for(int i = 0 ; i < mystring.length() ; i++){
        char the ; 
        the = mystring[i] ;
        
        cout<<int(mystring[i]) <<endl ; 

        if(int(the)>90){
            cout<<char(int(the)-32)<<endl ;
        }
        else{
            cout<<mystring[i]<<endl ;
        }
        
    }
}



int main(){
     
     convert_small_big();
     
    string theSecond = "132432542";

    sort(theSecond.begin(), theSecond.end(),greater<int>());

    cout<<theSecond<<endl ; 

    for(int i = 0 ; i < theSecond.size() ; i++){
        cout<<theSecond[i]<<endl ; 
    }
    
    for(int i = 0 ; i < theSecond.size()/2 ; i ++){
        
        theSecond.push_back(1) ;
        cout<<i<<"---i"<<endl ;

    }

    cout<<theSecond<<endl ; 

    

     
    
   
 
}