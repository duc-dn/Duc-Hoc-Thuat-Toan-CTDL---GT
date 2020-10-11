#include <iostream>
#include <stdio.h>
using namespace std;


class NSX
{
private:
    string Mansx;
    string TenNSX;
    string DCNSX;
friend class Hang;
};

class Hang
{
private:
    string mahang;
    string tenhang;
    float dongia;
    float trongluong;
    NSX a;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout << "Ma hang: ";        fflush(stdin);  getline(cin, this->mahang);
    cout << "Ten hang: ";       fflush(stdin);  getline(cin, this->tenhang);
    cout << "Don gia: ";        fflush(stdin);  cin >> this->dongia;
    cout << "Trong luong: ";                    cin >> this->trongluong;
    cout << "Ma NSX: " ;                        cin >> this->a.Mansx;
    cout << "Ten NSX: ";                        cin >> this->a.TenNSX;
    cout << "Dia chi NSX: ";    fflush(stdin);  getline(cin, this->a.DCNSX);
}

void Hang::xuat()
{
    cout << "\nMa hang: " << this->mahang;
    cout << "\nTen hang: " << this->mahang;
    cout << "\nDon gia: " << this->dongia;
    cout << "\nTrong luong: " << this->trongluong;
    cout << "\nMa NSX: " << this->a.Mansx;
    cout << "\nTen NSX: " << this->a.TenNSX;
    cout << "\nDia chi NSX: " << this->a.DCNSX;
}
int main()
{
    Hang a;
    a.nhap();
    a.xuat();
    return 0;
}
