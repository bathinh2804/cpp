#include<iostream>
using namespace std;

// Ham doi 
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
void kt (int n){
    if (n<2)
    {
        return 0;
    }
    else if ( n>2)
    {
        if (n%2 == 0){
            return 0;
        }
        for (int i = 3; i <= sqrt((float)n ); i+=2)
        {
           if (n%i == 0)
           {
                return 0;
           }
           
        }
        
    }
    return 1;
}
void SapXepSTk(int a[], int n)
{
	int i, j;
    for(i=0; i<n-1; i++){
	if (kt==1){
        
		for(j=i+1; j<n; j++)
			if(a[i]>a[j] && kt( a[j])==1)
				swap(a[i],a[j]);
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

int main(){ int n;
    
    do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0); 
    int a[n];  
    nhapmang(a,n); 
    SapXepSTk(a, n);
    cout<<"Mang sau khi sap xep so nguyen to tang dan: "<<endl;
    xuatmang(a, n);
    return 0;
}
