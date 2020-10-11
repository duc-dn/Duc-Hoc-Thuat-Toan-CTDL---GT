#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

class May
{
private:
    string mamay;
    string kieumay;
    string tinhtrang;
public:
    void nhap();
    void xuat();
};

void May::nhap()
{
    cout << "Ma may: ";     fflush(stdin);      getline(cin, this->mamay);
    cout << "Kieu may: ";   fflush(stdin);      getline(cin, this->kieumay);
    cout << "Tinh trang: "; fflush(stdin);      getline(cin, this->tinhtrang);
}

void May::xuat()
{
    cout << "\nMa may: " << this->mamay;
    cout << "\nKieu may: " << this->kieumay;
    cout << "\nTinh trang: " << this->tinhtrang;
}

class QuanLy
{
private:
    string maql;
    string hoten;
public:
    void nhap();
    void xuat();
};

void QuanLy::nhap()
{
    cout << "Ma quan ly: ";     fflush(stdin);      getline(cin, this->maql);
    cout << "Ho ten: ";         fflush(stdin);      getline(cin, this->hoten);
}

void QuanLy::xuat()
{
    cout << "\nMa quan ly: " << this->maql;
    cout << "\nHo ten quan ly: " << this->hoten;
}
class PhongMay
{
private:
    string maphong;
    string tenphong;
    float dientich;
    QuanLy x;
    May a[100];
    int n;
public:
    void nhap();
    void xuat();
};

void PhongMay::nhap()
{
    cout << "Ma phong: ";           fflush(stdin);      getline(cin, this->maphong);
    cout << "Ten phong: ";          fflush(stdin);      getline(cin, this->tenphong);
    cout << "Dien tich: ";                              cin >> this->dientich;
    cout << "Thong tin quan ly: \n";  fflush(stdin);      this->x.nhap();
    cout << "Nhap thong tin may: \n";
    cout << "Nhap so luong may: ";  cin >> this->n;
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
}

void PhongMay::xuat()
{
    cout << "\nMa phong: " << this->maphong;
    cout << "\nTen phong: " << this->tenphong;
    cout << "\nDien tich: " << this->dientich;
    cout << "\nThong tin quan ly: " << endl;
    x.xuat();
    cout << "\nThong tin may: " << endl;
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
}
int main()
{
    PhongMay b;
    b.nhap();
    b.xuat();
    return 0;
}
