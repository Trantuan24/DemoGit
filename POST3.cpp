#include<bits/stdc++.h>

using namespace std;

class Songuyen{
	private:
		int a, b;
	public:
		void nhap(){
			cin >> a >> b;
		}
		void in(){
			cout << a+b;
		}
};

int main(){
	Songuyen x;
	x.nhap();
	x.in();
}