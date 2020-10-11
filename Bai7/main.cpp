#include <iostream>

using namespace std;

class CanBo
{
private:
    string ma;
    string hoten;
    int ngaysinh;
    int snlamviec;
public:
    void nhap();
    void xuat();
    int tinhluong();
    CanBo();
    ~CanBo();
};

void CanBo::nhap()
{
    cout << "\nMa can bo: ";
    cin >> this->ma;
    cout << "Ho ten can bo: ";
    cin.ignore();
    getline(cin, this->hoten);
    cout << "Ngay sinh: ";
    cin >> this->ngaysinh;
    cout << "So ngay lam viec trong thang: ";
    cin >> this->snlamviec;
}

void CanBo::xuat()
{
    cout << "\nMa can bo: " << this->ma << " - " << "Ho ten can bo: " << this->hoten
    << " - " << "Ngay sinh: " << this->ngaysinh << " - " << "So ngay lam viec trong thang: " << this->snlamviec;
}

int CanBo::tinhluong()
{
    return this->snlamviec * 250000;
}

CanBo::CanBo()
{

}
CanBo::~CanBo()
{

}

int main()
{
    CanBo cb;
    cb.nhap();
    cout << "\n\t\tThong Tin Can Bo";
    cb.xuat();
    cout << "\nLuong cua can bo: " << cb.tinhluong();
    return 0;
}
