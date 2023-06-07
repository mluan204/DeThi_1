#include "cVe.h"

void cVe::Nhap()
{
	cin.ignore();
	cout << "\t- Nhap ma ve: ";
	getline(cin, ma);
	cout << "\t- Nhap ho ten: ";
	getline(cin, hoten);
}

void cVe::Xuat()
{
	cout << "\t- Ma ve: " << ma << endl;
	cout << "\t- Ho ten: " << hoten << endl;
}

int cVe::getgiave()
{
	return giave;
}
