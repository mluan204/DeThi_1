#pragma once  
#include <iostream>
#include <string>
using namespace std;

class cVe
{
protected:
	string ma;
	string hoten;
	int giave;
public:
	cVe(string ma = "", string hoten = "")
	{
		this->ma = ma;
		this->hoten = hoten;
	}

	virtual void Nhap();
	virtual void Xuat();
	virtual void GiaVe()=0;
	virtual int getLoai() = 0;
	int getgiave();
};

