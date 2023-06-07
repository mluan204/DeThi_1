#include "cQuanLyVe.h"

int main()
{
	cQuanLyVe ds;
	cout << "--- NHAP THONG TIN CAC VE ---" << endl;
	ds.Nhap();
	cout << "   --- THONG TIN CAC VE ---" << endl;
	ds.Xuat();
	cout << "\t- Tong tien ve da ban danh cho hssv: " << ds.TongTienVeSV() << endl;
	cout << "--- THONG TIN VE THUONG CO GIA CAO NHAT ---" << endl;
	ds.Tim_VeThuong_GiaMax()->Xuat();;

	return 0;
}