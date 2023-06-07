#pragma once
#include "cVe.h"

class cVeSinhVien: public cVe
{
private:
	string mssv;
	int sokm;
public:
	cVeSinhVien(string mssv = "", int sokm = 0)
	{
		this->mssv = mssv;
		this->sokm = sokm;
	}

	void Nhap();
	void Xuat();
	void GiaVe();
	int getLoai()
	{
		return 2;
	}
};

