#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

class CanBo
{
private:
    string macb;
    string hoten;
    int ngaysinh;
    int songaylv;
public:
    void nhap();
    void xuat();
    int tinhluong();
};

void CanBo::nhap()
{
    cout << "\nMa Can Bo: ";            fflush(stdin);      getline(cin, this->macb);
    cout << "Ho ten: ";                 fflush(stdin);      getline(cin, this->hoten);
    cout << "Ngay sinh: ";                                  cin >> this->ngaysinh;
    cout << "So ngay lam viec: ";                           cin >> this->songaylv;
}

void CanBo::xuat()
{
    cout << endl;
    cout << setw(20) << this->macb;
    cout << setw(20) << this->hoten;
    cout << setw(20) << this->ngaysinh;
    cout << setw(20) << this->songaylv;
    cout << setw(20) <<this->tinhluong();
}

int CanBo::tinhluong()
{
    return this->songaylv * 250000;
}
int main()
{
    CanBo a;
    a.nhap();
    cout << setw(20) << "Ma can bo" << setw(20) << "Ho ten" << setw(20) << "Ngay sinh" << setw(20) << "So ngay LV" << setw(20) << "Tinh Luong";
    a.xuat();

    return 0;
}
