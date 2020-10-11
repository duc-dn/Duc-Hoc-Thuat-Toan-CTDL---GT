#include <iostream>
#include <stdio.h>
using namespace std;
class DoanhNghiep;
class Date
{
private:
    int day, month, year;
public:
    void nhap();
    void xuat();
friend void DThuIn2015(DoanhNghiep a[], int n);
};

void Date::nhap()
{
    cout << "Nhap ngay thang nam: ";    cin >> this->day >> this->month >> this->year;
}

void Date::xuat()
{
    cout << "\nNgay/thang/nam: " << this->day << "/" << this->month << "/" << this->year;
}
class Diachi
{
friend class DoanhNghiep;
private:
    string dienthoai;
    string phuong;
    string quan;
    string thanhpho;
friend void DNHN(DoanhNghiep a[], int n);
};

class DoanhNghiep
{
private:
    string maDN;
    string tenDN;
    Date ngayTl;
    Diachi diachi;
    string giamdoc;
    long doanhthu;
public:
    void nhap();
    void xuat();
friend void DNHN(DoanhNghiep a[], int n);
friend void DThuIn2015(DoanhNghiep a[], int n);
friend void test(DoanhNghiep a[], int n);

};

void DoanhNghiep::nhap()
{
    cout << "Ma DN: ";          fflush(stdin);  getline(cin, this->maDN);
    cout << "Ten DN: ";         fflush(stdin);  getline(cin, this->tenDN);
    cout << "Ngay TL: "<< endl; fflush(stdin);  ngayTl.nhap();
    cout << "Dien thoai: ";     fflush(stdin);  getline(cin, this->diachi.dienthoai);
    cout << "Phuong: ";         fflush(stdin);  getline(cin, this->diachi.phuong);
    cout << "Quan: ";           fflush(stdin);  getline(cin, this->diachi.quan);
    cout << "Thanh pho: ";      fflush(stdin);  getline(cin, this->diachi.thanhpho);
    cout << "Giam doc: ";       fflush(stdin);  getline(cin, this->giamdoc);
    cout << "Doanh thu: ";                      cin >> this->doanhthu;
}

void DoanhNghiep::xuat()
{
    cout << "\nMa DN: " << this->maDN;
    cout << "\nTen DN: " << this->tenDN;
    cout << "\nNgay TL: ";  this->ngayTl.xuat();
    cout << "\nDien thoai: " << this->diachi.dienthoai;
    cout << "\nPhuong: " << this->diachi.phuong;
    cout << "\nQuan: " << this->diachi.quan;
    cout << "\nThanh pho: " << this->diachi.thanhpho;
    cout << "\nGiam doc: " << this->giamdoc;
    cout << "\nDoanh thu: " << this->doanhthu;
}

void DNHN(DoanhNghiep a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i].diachi.thanhpho).compare("Ha Noi") == 0)
        {
            a[i].xuat();
        }
    }
}
void DThuIn2015(DoanhNghiep a[], int n)
{
    float tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].ngayTl.year == 2015)
        {
            tong += a[i].doanhthu;
        }
    }
    cout << "\n\nTong doanh thu cua cac doanh nghiep thanh lap nam 2015 la: " << size_t(tong);
}
void test(DoanhNghiep a[], int n)
{
    string x;
    cout << "\nNhap ma DN can sua: ";       fflush(stdin);      getline(cin, x);
    bool ok = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i].maDN.compare(x) == 0)
        {
            a[i].nhap();
            ok = true;
        }
    }
    if (ok == false)
    {
        cout << "\nMa Dn khong co trong ds cac doanh nghiep";
    }
}
int main()
{
    DoanhNghiep a[100];
    int n;
    cout << "Nhap so doanh nghiep: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    cout << "\n\nThong tin doanh nghiep o Ha Noi\n";
    DNHN(a, n);
    DThuIn2015(a,n);
    test(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
