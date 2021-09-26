#include<iostream>
using namespace std;

int prime(int n){
if(n==2)
return 0;

for(int i=2;i*i<=n;i++){
if(n%i==0)
return 1;
}
return 0;
}

int main(){
int n;
cout<<"Enter a number"<<endl;
cin>>n;
if(prime(n)==1)
cout<<"The number is not prime"<<endl;
else 
cout<<"The number is prime"<<endl;
return 0;
}

