#include <iostream>
#include <stdio.h>
using namespace std;

class XeHoi
{
private:
    string nhanhieu;
    string hangSX;
    string kieudang;
    string mauson;
    int namsx;
    float giaban;
public:
    void nhap();
    void xuat();
friend void htToyota(XeHoi a[], int n);
friend void sapxepgia(XeHoi a[], int n);
};

void XeHoi::nhap()
{
    cout << "Nhan hieu: ";          fflush(stdin);      getline(cin, this->nhanhieu);
    cout << "Hang SX: ";            fflush(stdin);      getline(cin, this->hangSX);
    cout << "Kieu dang: ";          fflush(stdin);      getline(cin, this->kieudang);
    cout << "Mau son: ";            fflush(stdin);      getline(cin, this->mauson);
    cout << "Nam san xuat: ";                           cin >> this->namsx;
    cout << "Gia ban: ";                                cin >> this->giaban;
}

void XeHoi::xuat()
{
    cout << "\nNhan hieu: " << this->nhanhieu;
    cout << "\nHang SX: " << this->hangSX;
    cout << "\nKieu dang: " << this->hangSX;
    cout << "\nMau son: " << this->mauson;
    cout << "\nNam san xuat: " << this->namsx;
    cout << "\nGia ban: " << size_t(this->giaban);
}

void htToyota(XeHoi a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].hangSX.compare("Toyota") == 0)
        {
            a[i].xuat();
        }
    }
}

void hoanvi(XeHoi &a, XeHoi &b)
{
    XeHoi c = a;
    a = b;
    b = c;
}

void sapxepgia(XeHoi a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].giaban > a[j].giaban)
            {
                hoanvi(a[i], a[j]);
            }
        }
    }
}
int main()
{
    XeHoi a[100];
    int n;
    cout << "Nhap so luong xe hoi: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    htToyota(a, n);
    cout << endl;
    sapxepgia(a, n);
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
