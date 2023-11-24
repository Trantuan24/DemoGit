#include<bits/stdc++.h>

using namespace std;
// Phương thức có đối tượng là tham số truyền vào

class ThoiGian{
	private:
		int gio, phut;
	public:
		void nhap(int gio, int phut){
//			cout << "Nhap gio: "; cin >> gio;
//			cout << "Nhap phut: "; cin >> phut;
			this->gio = gio;
			this->phut = phut;
		}
		void xuat(){
			cout << gio << 'h' << phut << 'p';
		}
		ThoiGian tong(ThoiGian T1, ThoiGian T2){  // Đối tượng là tham số truyền vào
			this->phut = T1.phut + T2.phut;
			this->gio = this->phut / 60;
			this->phut %= 60;
			this->gio = this->gio + T1.gio + T2.gio;
			return *this;
		}
};


// Hàm khởi tạo sao chép ( Copy constructor )

class SinhVien{
	private:
		int MSSV;
		string HoTen;
	public:
		SinhVien(){}
		SinhVien(int ms, string ten){
			this->MSSV = ms;
			this->HoTen = ten;
		}
		// Chỉ muốn thay đổi 1 số thành phần kp tất cả
		SinhVien(const SinhVien &sv){
			HoTen = sv.HoTen;
		}
};



int main(){
	// Phương thức có đối tượng là tham số truyền vào
//	ThoiGian T1, T2, T3;
//	T1.nhap(2,20);
//	T2.nhap(3,50);
//	T3.tong(T1, T2);
//	T3.xuat();
	
	// Copy constructor
	SinhVien sv1(1, "Khoa"), sv2;
	sv2 = SinhVien(sv1);  // Sẽ chỉ lấy tên còn MSSV là giá trị rác
}
