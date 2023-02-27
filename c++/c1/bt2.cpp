
#include<iostream>
#include<math.h>
using namespace std;

struct DIEM
{
	int x;
	int y;
    
};


void NhapToaDo(DIEM &d)
{
	cout<<"Nhap x  "; cin>> d.x;
	cout<<"Nhap y "; cin>> d.y;
}

void XuatToaDo(DIEM d)
{
	cout<<"("<<d.x<<","<<d.y<<")";
}



int main()
{
	DIEM x, y,z;
	
	cout<<"Diem x:\n";
	NhapToaDo(x);

	cout<<"\nDiem y: \n";
	NhapToaDo(y);
    ;

	cout<<"\nToa do a la: ";
	XuatToaDo(x);

	cout<<"\nToa do  y la: ";
	XuatToaDo(y);
    
	
	
	cout<<endl;
}
	