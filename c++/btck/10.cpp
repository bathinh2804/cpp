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


 
// Tính tổng các số chẵn trong mảng
int TongPTChan(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            continue;
        }
        sum += a[i];
    }
    return sum;
}
 
int main()
{
    int arr[1000];
 
    int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
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
    int kq =TongPTChan(arr,n);
	cout<<"\nTong cac phan tu chan co trong mang la: "<< kq;
}