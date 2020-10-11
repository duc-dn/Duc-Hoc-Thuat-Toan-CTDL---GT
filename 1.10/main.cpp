#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

class Hang
{
private:
    string mahang;
    string tenhang;
    float dongia;
    int soluong;
public:
    void nhap();
    void xuat();
};

void Hang::nhap()
{
    cout << "Ma hang: ";            fflush(stdin);          getline(cin, this->mahang);
    cout << "Ten hang: ";           fflush(stdin);          getline(cin, this->tenhang);
    cout << "Don gia: ";                                    cin >> this->dongia;
    cout << "So luong: ";                                   cin >> this->soluong;
}

void Hang::xuat()
{
    cout << endl;
    cout << setw(20) << this->mahang;
    cout << setw(20)<< this->tenhang;
    cout << setw(20) << this->dongia;
    cout << setw(20) << this->soluong;
    cout << setw(20) << size_t(this->soluong * this->dongia);
}
int main()
{
    int n;
    cout << "Nhap so mat hang: ";
    cin >> n;
    Hang a[100];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    cout << setw(20) << "Ma hang" << setw(20) << "Ten hang" << setw(20) << "Don gia" << setw(20) << "So luong" << setw(20) << "Don Gia";
    for (int i = 0; i < n; i++)
    {
        a[i].xuat();
    }


    return 0;
}
