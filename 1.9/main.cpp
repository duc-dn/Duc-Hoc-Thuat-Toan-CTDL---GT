#include <iostream>
#include <iomanip>
using namespace std;

class HCN
{
private:
    float cd, cr;
public:
    void nhap();
    void xuat();
    void ve();
    float dientich();
    float chuvi();
};

void HCN::nhap()
{
    cout << "Nhap chieu dai: ";     cin >> this->cd;
    cout << "Nhap chieu rong: ";    cin >> this->cr;
}

void HCN::xuat()
{
    cout << endl;
    cout << setw(15) << this->cd;
    cout << setw(15) << this->cr;
    cout << setw(15) << this->chuvi();
    cout << setw(15) << this->dientich();
}

void HCN::ve()
{
    for (int i = 0; i < cr; i++)
    {
        for (int j = 0; j < cd; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

float HCN::chuvi()
{
    return (this->cr + this->cd) * 2;
}

float HCN::dientich()
{
    return this->cd * this->cr;
}
int main()
{
    HCN a;
    a.nhap();
    cout << setw(15) << "Chieu dai" << setw(15) << "Chieu rong" << setw(15) << "Chu vi" << setw(15) << "Dien tich";
    a.xuat();
    cout << "\nVe\n";
    a.ve();
    return 0;
}
