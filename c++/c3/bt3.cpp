#include<iostream>
using namespace std;

// Ham doi 
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

void SapXepPTLe(int a[], int n)
{
	int i, j;
	
	for(i=0; i<n-1; i++)
		for(j=i+1; j<n; j++)
			if(a[i]>a[j] && a[i]%2!=0 && a[j]%2!=0)
				swap(a[i],a[j]);
}


void nhapmang(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}


void xuatmang(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}

int main(){ int n;
    
    do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0); 
    int a[n];  
    nhapmang(a,n); 
    SapXepPTLe(a, n);
    cout<<"Mang sau khi sap xep so le tang dan: "<<endl;
    xuatmang(a, n);
    return 0;
}
