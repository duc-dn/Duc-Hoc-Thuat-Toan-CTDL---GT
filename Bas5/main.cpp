#include <iostream>
#include <math.h>
using namespace std;

class tamgiac
{
private:
    float a, b, c;
public:
    void nhap();
    void xuat();
    float chuvi();
    float dientich();
};

void tamgiac::nhap()
{
    cout << "\nNhap 3 canh cua tam giac: ";
    cin >> this->a >> this->b >> this->c;
}
void tamgiac::xuat()
{
    cout << "\n3 canh cua tam giac la: " << this->a << ", " << this->b << ", " << this->c;
}

float tamgiac::chuvi()
{
    return this->a + this->b + this->c;
}

float tamgiac::dientich()
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    tamgiac t;
    t.nhap();
    t.xuat();
    cout << "\nChu vi: " << t.chuvi();
    cout << "\nDien tich: " << t.dientich();
    return 0;
}
