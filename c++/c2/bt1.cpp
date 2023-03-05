#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

long giaithua( int n) {
    if(n==0)
    return 1 ; 
    return giaithua(n-1)*n;
}
int main(){
    int n, T;
    cout<< "nhâp n = "<<endl;
    cin>>n;
    T = giaithua(n);
    cout<< "T = "<<T<<endl;
   
    return 0;
}