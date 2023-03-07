#include<iostream>
using namespace std;

// Ham doi 
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}




void sxgiam(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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
    sxgiam(a, n);
    cout<<"Mang sau khi sap xep giam dan: "<<endl;
    xuatmang(a, n);
    return 0;
}