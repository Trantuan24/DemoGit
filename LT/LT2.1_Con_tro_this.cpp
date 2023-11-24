#include<bits/stdc++.h>

using namespace std;
// Con trỏ this

class Phanso{
	private:
		int tu,mau;
	public:
		Phanso Rutgon();
		Phanso Rutgon1();
		void Rutgon2();
		void nhap();
		void xuat();
};

// Cách dùng 1 của con trỏ this: "Trỏ" (Tham chiếu) đến các thành phần của class hiện tại
void Phanso::nhap(){
	cout << "Nhap tu so: "; cin >> this->tu;
	cout << "Nhap mau so: "; cin >> this->mau;
}

void Phanso::xuat(){
	cout << this->tu << "/" << this->mau;
}

// Cách dùng thứ 2: Trả về object hiện tại
Phanso Phanso::Rutgon(){
	int a,b;
	a = abs(this->tu);
	b = abs(this->mau);
	this->tu /= __gcd(a,b);
	this->mau /= __gcd(a,b);
	// Đến đây thì giá trị của tử,mẫu đã thay đổi 
	return *this;  // Trả về object hiện tại
}

Phanso Phanso::Rutgon1(){
	Phanso ps;
//	ps.tu = this->tu;
//	ps.mau = this->mau;
	int a,b;
	a = abs(ps.tu);
	b = abs(ps.mau);
	ps.tu /= __gcd(a,b);
	ps.mau /= __gcd(a,b);
	return ps;
}

// Hàm này ko thực hiện trả về
void Phanso::Rutgon2(){
	int a,b;
	a = abs(this->tu);
	b = abs(this->mau);
	this->tu /= __gcd(a,b);
	this->mau /= __gcd(a,b);
}



int main(){
	Phanso ps;
	ps.nhap();
	cout << "Rut gon dung void: ";
	ps.Rutgon2();
	ps.xuat();
	
	cout << "\nRut gon dung con tro this: ";
	ps.Rutgon();
	ps.xuat();
	
	cout << "\nRut gon dung object khac: ";
	ps.Rutgon1();
	ps.xuat();
}