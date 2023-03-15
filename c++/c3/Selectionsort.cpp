#include<iostream>
using namespace std;

// Ham doi 
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}

 void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (i = 0; i < n-1; i++)
    {
    // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
  
    // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
        swap(arr[min_idx], arr[i]);
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
    selectionSort(a, n);
    cout<<"Mang sau khi sap xep tang dan: "<<endl;
    xuatmang(a, n);
    return 0;
}