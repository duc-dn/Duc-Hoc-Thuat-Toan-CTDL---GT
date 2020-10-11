#include <iostream>
#include <stdio.h>
using namespace std;

class sinhvien
{
private:
    string masv;
    string hoten;
    float diemtoan;
    float diemly;
    float diemhoa;
public:
    void nhap();
    void xuat();
friend void sapxep(sinhvien a[], int n);
};


void sinhvien::nhap()
{
    cout << "Ma SV: ";      fflush(stdin);  getline(cin, this->masv);
    cout << "Ho ten: ";     fflush(stdin);  getline(cin, this->hoten);
    cout << "Diem toan: ";                  cin >> this->diemtoan;
    cout << "Diem ly: ";                    cin >> this->diemly;
    cout << "Diem hoa: ";                   cin >> this->diemhoa;
}

void sinhvien::xuat()
{
    cout << "\nMa SV: " << this->masv;
    cout << "\nHo ten: " << this->hoten;
    cout << "\nDiem toan: " << this->diemtoan;
    cout << "\nDiem ly: " << this->diemhoa;
    cout << "\nDiem hoa: " << this->diemhoa;
}

float tinhtong(float a, float b, float c)
{
    return a + b + c;
}

void sapxep(sinhvien a[], int n)
{
    for (int i = 0; i <n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((a[i].diemhoa, a[i].diemhoa, a[i].diemtoan) > (a[j].diemhoa, a[j].diemhoa, a[j].diemtoan))
            {
                sinhvien tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }
}

int main()
{
    int n ; cin >> n;
    sinhvien a[100];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    cout << "\n\n\n";
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    sapxep(a, n);
    cout << "\n\n\n";
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
