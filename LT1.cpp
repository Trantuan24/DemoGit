#include<bits/stdc++.h>

using namespace std;

/* class: Lớp --> Gồm 2 phần:
	 + Thuộc tính: attribute ( Trường dữ liệu của class)
	 + Phương thức: method, behavior ( các hành động của class) 
	--> object: Đối tượng: --> Là thực thể của class ( Có tất cả các tính chất của class đó)    
	+ constructor: Hàm khởi tạo
	+ destructor: Hàm hủy
	*/
	
/*
class TenClass{
	 Tính chất Encapsulation: Đóng gói ( Tức chỉ truy cập, thao tác ở bên trong Class còn bên ngoài Class sẽ ko truy cập đc )
	--> Acces Modifier: ( Phạm vi thuộc tính trong Class)
		 + private: thg là thuộc tính
		 + plubic: thg là phương thức
		 + protected: (Lq đến kế thừa)
	
};
*/

class Sinhvien{
	private:  // Gọi các thuộc tính trong class
		string id,Hoten,ns;
		double gpa;
	public:   // Gọi các phương thức trong Class
	
		Sinhvien(); // constructor luôn đc gọi khi tạo mới 1 đối tượng (constructor là phương thức có tên trùng với Class ko có kiểu trả về)
		Sinhvien(string, string, string, double);  // Khai báo 1 constructor khác có tham số
		void xinchao(){   // Phuong thức này ta khai báo và xd ngay trong Class 
			cout << "Hello !\n";		
		};
		
		void dihoc();
		
		~Sinhvien(); // destructor
};

Sinhvien::Sinhvien(){
	cout << "Ham khoi tao duoc goi!\n";
}

Sinhvien::Sinhvien(string ma, string name, string ns, double diem){
	this->id = ma;
	this->Hoten = name;
	this->ns = ns;
	this->gpa = diem;
	cout << "Ham khoi tao chua tham so duoc goi!\n";
}

void Sinhvien::dihoc(){   // Xd phương thức với pham vi đc chỉ định rõ qua 'Sinhvien::dihoc()'
	cout << "Di Hoc!\n";
}

Sinhvien::~Sinhvien(){
	cout << "Ham da duoc huy tai day!\n";
}

int main(){
	Sinhvien s;   // Constructor sẽ đc thực hiện mỗi khi ta tạo 1 đối tượng --> Gọi theo kiểu hàm nào trả về hàm đó
				  // Desstructor tương tự như constructor 
//	Sinhvien s("001","Nguyen A","24/01/2004", 9.5);   // Constructor có tham số 
	s.xinchao();
	s.dihoc();
//	cout << s.id << endl;  // Ko thể truy cập đc vì thuộc tính này đóng gói trong Class Sinhvien
	
}