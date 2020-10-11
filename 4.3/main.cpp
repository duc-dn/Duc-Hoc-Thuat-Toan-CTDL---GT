#include <iostream>
#include <stdio.h>
using namespace std;

class Date
{
private:
    int ngay, thang , nam;
friend class Hang;
};

class Hang
{
private:
    string mahang;
    string tenhang;
    Date Ngaysx;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout << "Ma hang: ";    fflush(stdin);  getline(cin, this->mahang);
    cout << "Ten hang: ";   fflush(stdin);  getline(cin, this->tenhang);
    cout << "Ngay san xuat: ";              cin >> this->Ngaysx.ngay >> this->Ngaysx.thang >> this->Ngaysx.nam;
}

void Hang::xuat()
{
    cout << "\nMa hang: " << this->mahang;
    cout << "\nTen hang: " << this->tenhang;
    cout << "\nNgay san xuat: " << this->Ngaysx.ngay << "/" << this->Ngaysx.thang << "/" << this->Ngaysx.nam;
}
int main()
{
    Hang a;
    a.nhap();
    a.xuat();
    return 0;
}
