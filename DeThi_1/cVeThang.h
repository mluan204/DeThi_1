#pragma once
#include "cVe.h"

class cVeThang:public cVe
{
private:
	string ngaybatdau;
	string ngayhethan;
public:
	cVeThang(string ngaybd = "", string ngayhh = "")
	{
		this->ngaybatdau = ngaybd;
		this->ngayhethan = ngayhethan;
	}

	void Nhap();
	void Xuat();
	void GiaVe();
	int getLoai()
	{
		return 3;
	}
};

