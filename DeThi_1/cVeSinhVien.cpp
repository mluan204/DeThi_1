#include "cVeSinhVien.h"

void cVeSinhVien::Nhap()
{
	cVe::Nhap();
	cout << "\t- Nhap ma so sinh vien: ";
	getline(cin, mssv);
	cout << "\t- Nhap so km se di: ";
	cin >> sokm;
	cout << endl;
}

void cVeSinhVien::Xuat()
{
	cVe::Xuat();
	cout << "\t- Ma so sinh vien: " << mssv << endl;
	cout << "\t- So km se di: " << sokm << endl;
	cout << "\t- Gia ve: " << giave << endl;
	cout << endl;
}

void cVeSinhVien::GiaVe()
{
	if (sokm <= 5) giave = 6000;
	if (sokm > 5 && sokm <= 10) giave = 10000;
	if (sokm > 10 && sokm <= 20) giave = 12000;
	if (sokm > 20) giave = 16000;
}
