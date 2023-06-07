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
		ds[i]->GiaVe();
	}
}

void cQuanLyVe::Xuat()
{
	for (int i = 0; i < ds.size(); i++)
	{	
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

void cQuanLyVe::VeThuongBanChayNhat()
{
	int loai[4] = { 0 };
	for (int i = 0; i < ds.size(); i++)
	{
		if (ds[i]->getLoai() == 1)
		{
			int x = ds[i]->getgiave();
			if (x == 10000)
				loai[0]++;
			else if (x == 15000)
				loai[1]++;
			else if (x == 20000)
				loai[2]++;
			else
				loai[3]++;
		}
	}
	int j = 0;
	for (int i = 1; i < 4; i++)
	{
		if (loai[j] < loai[i])
		{
			j = i;
		}
	}

	cout << "- Muc gia ve thuong duoc ban nhieu nhat: ";
	switch (j)
	{
	case 0:
		cout << 10000;
		break;
	case 1:
		cout << 15000;
		break;
	case 2:
		cout << 20000;
		break;
	case 3:
		cout << 25000;
		break;
	default:
		cout << "khong co !!";
		break;
	}
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

