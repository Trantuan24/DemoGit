#include<bits/stdc++.h>

using namespace std;

class Phanso{
	private:
		int tu, mau;
	public:
		void nhap();
		void xuat();
		Phanso tong();
		Phanso hieu();
		Phanso tich();
		Phanso thuong();
};

void Phanso::nhap(){
	cout << "Nhap tu: "; cin >> this->tu;
	cout << "Nhap mau: "; cin >> this->mau;
}

void Phanso::xuat(){
	cout << this->tu << "/" << this->mau;
}




int main(){
	Phanso ps;
	ps.nhap();
	ps.xuat();
}