#include<iostream>
 
 namespace First{
 int add(int a,int b){
 return a+b;
 }
 }
 
 namespace Second{
float add(float a,float b){
 return a+b;
 }
 }
 

 
 int main(){
 std::cout<<"Using First namespace ans:"<<add(2,2.2)<<std::endl;
 
 }
 
