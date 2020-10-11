#include <iostream>

using namespace std;

class HocSinh
{
private:
    string hoten;
    int ngay, thang, nam;
    string gioitinh;
    float diemTB;
    string xldd;
public:
    void nhap();
    void xuat();
    HocSinh();
    ~HocSinh();
};

void HocSinh::nhap()
{
    cout << "\nHo ten hoc sinh: ";
    getline(cin, this->hoten);
    cout << "Ngay thang nam sinh: ";
    cin >> this->ngay >> this->thang >> this->nam;
    cout << "Gioi tinh: ";
    cin >> this->gioitinh;
    cout << "Diem trung binh: ";
    cin >> this->diemTB;
    cout << "Xep loai dao duc: ";
    cin >> this->xldd;
}

void HocSinh::xuat()
{
    cout << "\nHo ten hoc sinh: " << this->hoten;
    cout << "\nNgay/Thang/Nam: " << this->ngay << "/" << this->thang << "/" << this->nam;
    cout << "\nGioi tinh: " << this->gioitinh;
    cout << "\nDiem trung binh: " << this->diemTB;
    cout << "\nXep loai dao duc: " << this->xldd;
}
HocSinh::HocSinh(){};
HocSinh::~HocSinh(){};
int main()
{
    HocSinh a;
    a.nhap();
    a.xuat();
    return 0;
}
