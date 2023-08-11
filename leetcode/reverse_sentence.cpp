#include<bits/stdc++.h>
using namespace std;

void problem(string mystring){
    
    int n = mystring.size(); 
    vector<string> mymap; 
    int i = 0 ;
    string rough = "";
    

    while(i<n){

        if(mystring[i]==' '){
            mymap.push_back(rough);
            rough = "";

        }
        else{
            rough = rough + mystring[i];
            
        }
        i++;


    }
    mymap.push_back(rough);

    int l = 0 ; 
    int r = mymap.size()-1;

    while(l<r){
        swap(mymap[i],mymap[r]);
    }


    for(auto i:mymap){
        cout<<i<<endl ;
    }

}
void  largestOddNumber(string num) {
        int n = num.size();
        int mynum = stoi(num);
        string answer = ""; 
        while(mynum>0){
            if(mynum%2==0){
                mynum = mynum/10 ; 
            }
            if(mynum%2!=0){
                break;
            }
        }
        answer+=to_string(mynum);
        cout<<answer;
    }




int main(){

    largestOddNumber("52");
}

