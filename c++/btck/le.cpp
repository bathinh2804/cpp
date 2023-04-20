#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nNhap phan tu thu a["<< i <<"]: ";
		cin>>a[i];
	}
}
 
void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}
// Tính tổng các số lẻ trong mảng
int TongPTle(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum += a[i];
        }
    }
    return sum;
}
 
int main()
{
    int arr[1000];
 
    int n; 
   do{
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0); 
 
    // Nhap mang
    NhapMang(arr, n);
 
    // Xuat mang
    XuatMang(arr, n);
 
    // Tính toán
    int kq =TongPTle(arr,n);
	cout<<"\nTong cac phan tu le co trong mang la: "<< kq;
}