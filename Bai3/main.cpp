#include <iostream>

using namespace std;

class PTBN
{
private:
    float a, b;
public:
    void nhap();
    void xuat();
    void tinh();
    PTBN();
    ~PTBN();
};

void PTBN::nhap()
{
    cout << "Nhap a: ";
    cin >> this->a;
    cout << "Nhap b: ";
    cin >> this->b;
}

void PTBN::xuat()
{
    cout << "Phuong trinh bac nhat co dang y = " << this->a <<"x" << " + " << this->b;
}

void PTBN::tinh()
{
    cout << "\nNghiem cua phuong trinh la: x = " << (- b) / (1.0 *a);
}

PTBN::PTBN()
{

}
PTBN::~PTBN(){};
int main()
{
    PTBN a;
    a.nhap();
    a.xuat();
    a.tinh();
    return 0;
}
