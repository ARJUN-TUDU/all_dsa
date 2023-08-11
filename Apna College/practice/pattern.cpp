#include<iostream>
#include<String.h> 


using namespace std; 


int myloop(int start,int end,int increase){
    for (int i=start;i<=end;i = i+ increase){
        return i ;
    }
}

int patternSquare(){
    for(int i = 0 ; i < 6 ; i ++){
        for ( int j = 0 ; j < 4 ; j++){
            cout << "*"  ; 
        }
        cout<< endl ; 
    }
}

int patternReduce( int a) {
    for(int i = 0 ; i < a ; i++){
        for(int j = i ; j < a ; j ++ ){

            cout << "*" ; 

        }

        cout << endl ; 
    }
}

void patternIncrease(int a) { 
    for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j <= i ; j++ ){
            cout << "*" ; 
        }
        cout<<endl ; 
    }
}

cout<<"endl"<<endl ;

void sameNumber(int a){

    for(int i = 1 ;i <= a ; i++ ){
        for(int j = 1 ; j <= i ; j++){
             cout<<i ; 
        }
        cout<< endl ; 
    }

}

void changePattern(){
    for (int i = 0 ; i < 10 ; i ++){
        for(int j = i ; j < 5 ; i ++){
           cout << "*" ; 
        }

    }
}

void floydsTriangle(int a){
    
    int count = 0 ; 
    for(int i = 0 ; i < 5 ; i ++){
        for(int j = 0 ; j <=i ;j++){
            count++; 
            cout<<count ; 

        }
        cout<<endl ; 
    }

}


void rhombusPattern(int a){

    for(int i = 0 ; i < a ; i++){
        for(int j = i ; j < a ; j++ ){
            cout<< " "  ; 
        }
        for(int k = 0 ; k<a ; k++){
            cout<<"*" ;
        }
        cout<<endl ; 
    }

}

void numberPattern(int a){
    for( int i = 0 ; i < a ; i++ ){
        for(int j = i ; j < a ; j++){
            cout<<" " ;
        }

        for(int k = 1 ; k <= i ; k++){
            cout<<k ; 
        }

        cout<<endl ; 
    }
}

void palindromikPattern(int a){
    for(int i = 0 ; i < a ; i ++){
        for(int j = i ; j < a ; j++){
            cout<<" " ; 
        }

        for(int k = i ; k >= 1; k--){
             cout<<k; 
            for(int c = k ; c <= i ; c++){
               cout<< c ; 
             }
        }

        cout<<endl ; 
        
    }
}

void piramidPattern(int a){
     
     for(int i = 0 ; i <= a ; i ++){
           for(int j = i ; j <=a ; j++){
               cout<<" "; 
           }
           for(int c = 0 ; c > a ; c = i*2+1 ){
               cout<<"x";
           }
           
           cout<<endl ;  
     }


}



void codeforces( string mstrings[], int n){
    char h ; 
    for(int i = 0 ; i < n ; i ++){
        char mnew ;
        cin>>mnew ; 
        mstrings[i] = mnew ;
    }

    for(int i =0 ; i < n ; i++){
        cout<<mstrings[i]<<endl;
    }


    ;
    cout<<"this is my answer"<<endl ;
    cout<<mstrings[2]<<endl;

} 






int main(){


  

}