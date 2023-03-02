
#include<iostream>
#include<math.h>
using namespace std;

struct DIEM
{
	int x;
	int y;
    int z;
    
};


void NhapToaDo(DIEM &d)
{
	cout<<"Nhap x  "; cin>> d.x;
	cout<<"Nhap y "; cin>> d.y;
    cout<<"Nhap z  "; cin>> d.z;
}

void XuatToaDo(DIEM d)
{
	cout<<"("<<d.x<<","<<d.y<<","<<d.z<<")";
}



int main()
{
	DIEM x, y,z;
	
	cout<<"Diem x:\n";
	NhapToaDo(x);

	cout<<"\nDiem y: \n";
	NhapToaDo(y);
    cout<<"Diem z:\n";
	NhapToaDo(z);

	cout<<"\nToa do a la: ";
	XuatToaDo(x);

	cout<<"\nToa do  y la: ";
	XuatToaDo(y);

    cout<<"\nToa do  z la: ";
	XuatToaDo(z);	
	
	cout<<endl;
    return 0 ;
}
	