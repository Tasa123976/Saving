#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double s,r;
	
	cout << "Nhap dien tich cau:";
	cin >> s;
	
	r=sqrt(s/(4*M_PI));
	cout << "The tich khoi cau la:" << 4.0*pow(r,3)*M_PI/3.0 << endl;
	
	return 0;
}