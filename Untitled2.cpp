#include<bits/stdc++.h>

using namespace std;

class SoThapPhan{
	private:
		int nguyen, thap_phan;
	public:
		void nhap();
		void in();
		SoThapPhan Cong(SoThapPhan a, SoThapPhan b);
		SoThapPhan Tru(SoThapPhan a, SoThapPhan b);
};

void SoThapPhan::nhap(){
	cout << "Nhap phan nguyen: "; cin >> this->nguyen;
	cout << "Nhap phan thap phan: "; cin >> this->thap_phan;
}

void SoThapPhan::in(){
	cout << "Ket qua: " << this->nguyen << "." << this->thap_phan;
}

SoThapPhan SoThapPhan::Cong(SoThapPhan a, SoThapPhan b){
	this->thap_phan = a.thap_phan + b.thap_phan;
	if(this->thap_phan >= 100){
		this->nguyen = a.nguyen + b.nguyen + 1;
		this->thap_phan = this->thap_phan - 1;
	}else if(this->thap_phan < 1){
		this->nguyen = a.nguyen + b.nguyen;
	}
	return *this;
}

int main(){
	SoThapPhan a,b,x;
	a.nhap();
	b.nhap();
	x.Cong(a,b);
	x.in();
}
