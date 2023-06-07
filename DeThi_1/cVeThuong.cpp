#include "cVeThuong.h"

void cVeThuong::GiaVe()
{
	if (sokm <= 5) giave = 10000;
	if (sokm > 5 && sokm <= 10) giave = 15000;
	if (sokm > 10 && sokm <= 20) giave = 20000;
	if (sokm > 20) giave = 25000;
}

void cVeThuong::Nhap()
{
	cVe::Nhap();
	cout << "\t- Nhap so km se di: ";
	cin >> sokm;
	cout << endl;
}

void cVeThuong::Xuat()
{
	cVe::Xuat();
	cout << "\t- So km se di: " << sokm << endl;
	cout << "\t- Gia ve: " << giave << endl;
	cout << endl;
}