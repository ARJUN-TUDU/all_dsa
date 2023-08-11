#include<bits/stdc++.h>
using namespace std;



void myfunction(string mystring){

    stack<char> mystack ; 
    int n = mystring.size();
    int  i  = 0 ;
    string answer ; 
    while(i<n){
        if(mystring[i]=='('){
            if(mystack.size()>0){
                answer+='(';
            }
            mystack.push(mystring[i]);
        }else{
            mystack.pop();
            if(mystack.size()>0){
                answer+=')';
            }
        }
    }
    cout<<answer;
}

string reverseVowels(string s) {

        vector<char> v = {'a','e','i','o','u'};
        vector<int> m(26,0) ;

        for(auto i : v){
            m[i-97] += 1;
        }


        
        int n = s.size(); 
        int l = 0 ; 
        int r = n ;

        while(l<r){

            if(m[s[l]-97]>0 && m[s[r]-97]>0){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            if(m[s[l]-97]<1){
                l++;
            }
            if(m[s[r]-97]<1){
                r--;
            }

        }

        return s ;

    }


int main(){
   
  
}