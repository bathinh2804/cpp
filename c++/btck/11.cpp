
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

void DemDuong(int a[], int n)
{
	int  DemAm=0, DemDuong=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]<0)
			DemAm = DemAm + 1;
		else 
			DemDuong = DemDuong + 1;
	}

	cout<<"\nSo phan tu duong co trong mang: "<< DemDuong;
}

void main()
{
	int a[MAX], n, x;
	
	cout<<"So luong phan tu thuc: "; cin>>n;
	//NhapMang(a,n);

	

	XuatMang(a,n);

	DemDuong(a,n);
	cout<<endl;
}