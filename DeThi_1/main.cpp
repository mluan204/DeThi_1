#include "cQuanLyVe.h"

int main()
{
	cQuanLyVe ds;
	cout << "--- NHAP THONG TIN CAC VE ---" << endl;
	ds.Nhap();
	cout << "   --- THONG TIN CAC VE ---" << endl;
	ds.Xuat();
	ds.VeThuongBanChayNhat();
	cout << "\n- Tong tien ve danh cho hssv da ban: " << ds.TongTienVeSV() << endl;
	cout << "\n--- THONG TIN VE THUONG CO GIA CAO NHAT ---" << endl;
	ds.Tim_VeThuong_GiaMax()->Xuat();;

	return 0;
}