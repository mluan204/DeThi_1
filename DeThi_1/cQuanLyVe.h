#pragma once
#include "cVe.h"
#include "cVeSinhVien.h"
#include "cVeThang.h"
#include "cVeThuong.h"
#include <vector>

class cQuanLyVe
{
private:
	vector<cVe*> ds;
public:
	void Nhap();
	void Xuat();
	int TongTienVeSV();
	cVe* Tim_VeThuong_GiaMax();
};

