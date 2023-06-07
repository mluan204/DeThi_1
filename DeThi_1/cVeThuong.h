#pragma once
#include "cVe.h"

class cVeThuong:public cVe
{
private:
	int sokm;
public:
	cVeThuong(int sokm = 0)
	{
		this->sokm = sokm;
	}

	void Nhap();
	void Xuat();
	void GiaVe();
	int getLoai()
	{
		return 1;
	}
};

