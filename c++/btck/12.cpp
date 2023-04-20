#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"\nPhan tu thu " << i <<": ";
		cin>> a[i];
	}
}



void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<< a[i] <<"\t";
}
int main()
{
    int arr[1000];
 
    int n; // số lượng phần tử của mảng
    // Kiểm tra số lượng phần tử là số dương + nhỏ hơn MAX_SIZE
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > 1000);
 
    // Nhap mang
    NhapMang(arr, n);
 cout<<"mang hien tai la  ";
    // Xuat mang
    XuatMang(arr, n);
 
    
	
}