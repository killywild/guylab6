#include<iostream>
using namespace std;

int main(){
    int A,B,C ;
    B=0 ;
    C=0 ;
    cout << "Enter an integer: ";
        cin >> A ;
    while (A!=0){
    if (A%2==0){
            B++; }
    
    else {
             C++ ; } 
        cout << "Enter an integer: ";
        cin >> A ;
        
             }
    cout <<"#Even numbers = " << B  <<endl ;
    cout <<"#Odd numbers = "<< C ; 
    
return 0 ;
}