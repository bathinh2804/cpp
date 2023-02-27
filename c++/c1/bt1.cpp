
#include<iostream>
using namespace std;

struct PHANSO
{
	int TS;
	int MS;
};

void NhapPS(PHANSO &x)
{
	cout<<"Nhap Tu so: "; cin>>x.TS;
	do
	{
		cout<<"Nhap Mau so: "; 
		cin>>x.MS;
		if(x.MS==0)
			cout<<"Nhap sai, yeu cau nhap lai mau so: ";
	}while(x.MS==0);
}

void XuatPS(PHANSO x)
{
	cout<<x.TS<<"/"<<x.MS;
}



int  main() 
{ 
	PHANSO ps1;

	cout<<"Nhap phan so: ";

	NhapPS(ps1);
	
	
	cout<<"Phan so  la: "; XuatPS(ps1);

	
	cout<<endl;
    return 0;
} 