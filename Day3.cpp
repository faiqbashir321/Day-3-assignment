//Write a program that takes two integers as input from the user.
//Using conditional statements, determine which integer is greater and display a message to the user indicating which integer is greater.
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
cout<<"please enter the value of a" <<endl ;
int a;
cin>>a;
cout<<"please enter the value of b " <<endl ;
int b;
cin>>b;
 if(a>b){
    cout<<"a is greater  ";
 }
 else{ 
    cout<<"b is greater ";
 }
 return 0;
}