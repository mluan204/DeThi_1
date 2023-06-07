#include "cQuanLyVe.h"

void cQuanLyVe::Nhap()
{
	int TongVe;
	cout << "Nhap vao tong so ve: ";
	cin >> TongVe;
	cVe* p;
	int loai;
	for (int i = 0; i < TongVe; i++)
	{
		cout << "- Nhap ve thuong -> 1" << endl;
		cout << "- Nhap ve hoc sinh sinh vien -> 2" << endl;
		cout << "- Nhap ve thang -> 3" << endl;
		do {
			cout << "=> Nhap lua chon: ";
			cin >> loai;
		} while (loai != 1 && loai != 2 && loai != 3);

		if (loai == 1)
		{
			p = new cVeThuong;
		} else {
			if (loai == 2)
			{
				p = new cVeSinhVien;
			}
			else {
				p = new cVeThang;
			}
		}
		p->Nhap();
		ds.push_back(p);
	}
}

void cQuanLyVe::Xuat()
{
	for (int i = 0; i < ds.size(); i++)
	{	
		ds[i]->GiaVe();
		ds[i]->Xuat();
	}
}

int cQuanLyVe::TongTienVeSV()
{
	int TongTien = 0;
	for (int i = 0; i < ds.size(); i++)
	{
		if (ds[i]->getLoai() == 2) {
			TongTien += ds[i]->getgiave();
		}
	}
	return TongTien;
}

cVe* cQuanLyVe::Tim_VeThuong_GiaMax()
{
	int i, d ;
	for (i = 0; i<ds.size();i++ )
	{
		if (ds[i]->getLoai() == 1)
		{
			d = i;
			break;
		}
		
	}
	cVe* max = ds[d];
	for (i = d + 1; i < ds.size(); i++)
	{
		if (ds[i]->getLoai() == 1 && max->getgiave() < ds[i]->getgiave())
		{
			max = ds[i];
			break;
		}
	}
	return max;
}

