#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class NSX
{
friend class Hang;
private:
	string masx;
	string tenNSX;
	string dcNSX;
};

class Hang
{
private:
	string mahang;
	string tenhang;
	float dongia;
	float trongluong;
	NSX x;
public:
	void nhap();
	void xuat();
};

void Hang::nhap()
{
	cout << "\nMa hang: ";                       getline(cin, this->mahang);
	cout << "Ten hang: ";       fflush(stdin);   getline(cin, this->tenhang);
	cout << "Don gia: ";                         cin >> this->dongia;
	cout << "Trong luong: ";                     cin >> this->trongluong;
	cout << "Ma NSX: ";         fflush(stdin);   getline(cin, this->x.masx);
	cout << "Ten NSX: ";        fflush(stdin);   getline(cin, this->x.tenNSX);
	cout << "Dia chi NSX: ";    fflush(stdin);   getline(cin, this->x.dcNSX);
}
void Hang::xuat()
{
	cout << "Ma hang: " << this->mahang;
	cout << "\nTen hang: " << this->tenhang;
	cout << "\nDon gia: " << this->dongia;
	cout << "\nTrong luong: " << this->trongluong;
	cout << "\nMa NSX: " << this->x.masx;
	cout << "\nTen NSX: " << this->x.tenNSX;
	cout << "\nDia chi NSX: " << this->x.dcNSX;
}

int main()
{
    Hang h;
	h.nhap();
	cout << "\n\tThong tin\n";
	h.xuat();
	return 0;

}
