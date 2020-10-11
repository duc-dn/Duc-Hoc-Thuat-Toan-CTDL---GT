#include <iostream>
#include <stdio.h>
using namespace std;

class NhanVien;
class Date
{
friend class NhanVien;
private:
    int day, month, year;
};

class PhongBan
{
friend class NhanVien;
private:
    int maPb;
    string tenPb;
    string truongphong;
    int soNv;
friend void HienThiNVTC(NhanVien a[], int n);
};

class NhanVien
{
private:
    int maNv;
    string hodem;
    string ten;
    Date ngaySinh;
    PhongBan phong;
public:
    void nhap();
    void xuat();
friend void HienThiNVTC(NhanVien a[], int n);
friend void sapxep(NhanVien a[], int n);
friend void xoaNV123(NhanVien a[], int n);
};

void NhanVien::nhap()
{
    cout << "\nMa nhan vien: ";                         cin >> this->maNv;
    cout << "Ho dem: ";             fflush(stdin);      getline(cin, this->hodem);
    cout << "Ten NV: ";             fflush(stdin);      getline(cin, this->ten);
    cout << "Ngay sinh (dd/mm/yy): ";                   cin >> this->ngaySinh.day >> this->ngaySinh.month >> this->ngaySinh.year;
    cout << "Phong ban: \n";
    cout << "Ma phong ban: ";                           cin >> this->phong.maPb;
    cout << "Ten phong ban: ";      fflush(stdin);      getline(cin, this->phong.tenPb);
    cout << "Truong phong: ";       fflush(stdin);      getline(cin, this->phong.truongphong);
    cout << "So nhan vien: ";                           cin >> this->phong.soNv;
}

void NhanVien::xuat()
{
    cout << "\nMa NV: " << this->maNv;
    cout << "\nHo dem: " << this->hodem;
    cout << "\nTen NV: " << this->ten;
    cout << "\nNgay sinh (dd/mm/yy): " << this->ngaySinh.day << "/" << this->ngaySinh.month << "/" << this->ngaySinh.year;
    cout << "\nMa phong ban: " << this->phong.maPb;
    cout << "\nTen phong ban: " << this->phong.tenPb;
    cout << "\nTruong phong: " << this->phong.truongphong;
    cout << "\nSo nhan vien: " << this->phong.soNv;

}

void hoanvi(NhanVien &a, NhanVien &b)
{
    NhanVien tam = a;
    a = b;
    b = tam;
}

void HienThiNVTC(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((a[i].phong.tenPb).compare("Hanh Chinh") == 0)
        {
            a[i].xuat();
        }
    }
}

void sapxep(NhanVien a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i].ten).compare(a[j].ten) > 0)
            {
                hoanvi(a[i], a[j]);
            }
        }
    }
}

void chen(NhanVien a[], NhanVien &b, int &n, int k)
{
    for (int i = n; i >= k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = b;
    n++;
}

void xoa(NhanVien a[], int &n, int k)
{
    for (int i = k; i < n; i++)
    {
        a[k] = a[k + 1];
    }
    n--;
}

void xoaNV123(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].maNv == 123)
        {
            xoa(a, n, i);
            i--;
        }
    }

}
int main()
{
    NhanVien a[100];
    int n;
    cout << "Nhap so luong nhan vien: ";    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }

    cout << "\n\nNhan vien phong tai chinh: \n";
    HienThiNVTC(a, n);
    cout << "\n\nSap xep nhan vien theo ten\n";
    sapxep(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    NhanVien x;
    cout << "\nNhap thong tin nhan vien x can chen";
    x.nhap();
    int k;
    cout << "\nNhap vi tri can chen: ";     cin >> k;
    chen(a, x, n, k);
    cout << "\nDanh sach ";
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    cout << "\n\nXoa nhan vien co ma 123\n";
    xoaNV123(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }


    return 0;
}
