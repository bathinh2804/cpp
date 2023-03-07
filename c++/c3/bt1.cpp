#include<iostream>
using namespace std;

// Ham doi 
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

void sxtang(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
}


void nhapmang(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}


void xuatmang(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}

int main(){
    int n;
    
    do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0); 
    int a[n];  
    nhapmang(a,n); 
    sxtang(a, n);
    cout<<"Mang sau khi sap xep tang dan: "<<endl;
    xuatmang(a, n);
    return 0;
}