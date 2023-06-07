#include "cVeThang.h"

void cVeThang::Nhap()
{
	cVe::Nhap();
	cout << "\t- Ngay dang ki: ";
	getline(cin, ngaybatdau);
	cout << "\t- Ngay het han: ";
	getline(cin, ngayhethan);
	cout << endl;
}

void cVeThang::Xuat()
{
	cVe::Xuat();
	cout << "\t- Ngay bat dau: " << ngaybatdau << endl;
	cout << "\t- Ngay het han: " << ngayhethan << endl;
	cout << "\t- Gia ve: " << giave << endl;
	cout << endl;
}

void cVeThang::GiaVe()
{
	giave = 500000;
}
