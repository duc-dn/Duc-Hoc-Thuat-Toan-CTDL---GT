#include <iostream>
#include <math.h>
using namespace std;

class PTBH
{
private:
    float a, b, c;
public:
    void nhap();
    void xuat();
    void tinh();
};

void PTBH::nhap()
{
    cout << "Nhap a: ";
    cin >> this->a;
    cout << "Nhap b: ";
    cin >> this->b;
    cout << "Nhap c: ";
    cin >> this->c;
}

void PTBH::xuat()
{
    cout << "Phuong trinh bac nhat co dang " << this->a <<"x^2" << " + " << this->b << "x" << " + " << this->c << " = " << "0";
}

void PTBH::tinh()
{
    if (c == 0)
    {
        if (a == 0 && b == 0)
        {
            cout << "\nPhuong trinh co vo so nghiem";
        }
        else if (a == 0 || b == 0)
        {
            cout << "\nPhuong trinh co 1 nghiem x = 0";
        }
        else
        {
            cout << "\nPhuong trinh co nghiem x = 0 va " << "x = " << -b / a;
        }
    }
    else
    {
        if (a == 0 && b == 0)
        {
            cout << "\nPhuong trinh vo nghiem";
            return;
        }

        float delta = (b * b - 4 * a * c);
        if (delta == 0)
        {
            cout << "\nPhuong trinh co nghiem duy nhat x1 = x2 = " << -b / (2 * a);
        }
        else if (delta < 0)
        {
            cout << "\nPhuong trinh vo nghiem";
        }
        else
        {
            cout << "\nPhuong trinh co nghiem x1 = " << (-b - sqrt(delta)) / (2 * a);
            cout << "\nPhuong trinh co nghiem x2 = " << (-b + sqrt(delta)) / (2 * a);

        }
    }
}

int main()
{
    PTBH a;
    a.nhap();
    a.xuat();
    a.tinh();
    return 0;
}
