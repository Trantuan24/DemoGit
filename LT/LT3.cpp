#include<bits/stdc++.h>

using namespace std;

// setter getter: Lấy và trả về giá trị trong Class

class Sinhvien{
	private:
		string id, ten, ns;
		double gpa;
	public:
		void nhap();
		void in();
		double getGPA();
		string getId();
		string getTen();
		string getNs();
		void setGPA(double);
};

void Sinhvien::nhap(){
	cout << "Nhap msv: "; cin >> this->id;
	cin.ignore();
	cout << "Nhap ho va ten: "; getline(cin, this->ten);
	cout << "Nhap ns: "; cin >> this->ns;
	cout << "Nhap diem: "; cin >> this->gpa;
}

void Sinhvien::in(){
	cout << this->id << " " << this->ten << " " << this->ns << " " << this->gpa << endl;
} 

double Sinhvien::getGPA(){  // Tương tự các hàm get khác
	return this->gpa;  // return gpa
}

// Ta có thể thực hiện các cách tìm kiếm, sắp xếp trên class với chú ý là phải trả về các thuộc tính của nó s/d các hàm get
bool cmp(Sinhvien a, Sinhvien b){  // Sx điểm GPA tăng dần
	return a.getGPA() < b.getGPA();
}

// Tương tự ta có thể thay dổi các thuộc tính của class khi dùng các hàm set
void Sinhvien::setGPA(double gpa){
	this->gpa = gpa;
}

int main(){
//	int n; cout << "Nhap so Sv: "; cin >> n;
//	Sinhvien s[100];
//	for(int i= 0 ; i< n; i++){
//		s[i].nhap();
//	}
//	sort(s, s+n, cmp);
//	for(int i = 0; i< n; i++){
//		s[i].in();
//	}

	// set
	Sinhvien x;
	x.setGPA(2.6);
	cout << x.getGPA();
	
	
}