#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

class Vehicle
{
protected:
    string nhanhieu;
    int namsx;
    string hang;
public:
    void nhap();
    void xuat();
};
void Vehicle::nhap()
{
    cout << "Nhap nhan hieu: ";         fflush(stdin);          getline(cin, this->nhanhieu);
    cout << "Nam san xuat: ";                                   cin >> this->namsx;
    cout << "Hang: ";                   fflush(stdin);          getline(cin, this->hang);
}

void Vehicle::xuat()
{
    cout << setw(20) << this->nhanhieu;
    cout << setw(20) << this->namsx;
    cout << setw(20) << this->hang;
}

class OTO : public Vehicle
{
private:
    int sochongoi;
    float dungtich;
public:
    void nhap();
    void xuat();
};

void OTO::nhap()
{
    Vehicle::nhap();
    cout << "Nhap so cho ngoi: ";       cin >> this->sochongoi;
    cout << "Dung tich: ";              cin >> this->dungtich;
}

void OTO::xuat()
{
    Vehicle::xuat();
    cout << setw(20) << this->sochongoi;
    cout << setw(20) << this->dungtich;
    cout << endl;
}

class Moto : public Vehicle
{
private:
    int phanphoi;
public:
    void nhap();
    void xuat();
};

void Moto::nhap()
{
    Vehicle::nhap();
    cout << "Phan phoi: ";      cin >> this->phanphoi;
}

void Moto::xuat()
{
    Vehicle::xuat();
    cout << setw(20) << this->phanphoi;
    cout << endl;
}


int main()
{
    Moto a;
    a.nhap();
    cout << "\n\n\t\tThong tin Moto\n";
    cout << setw(20) << "Nhan hieu" << setw(20) << "Nam san xuat" << setw(20) << "Hang" << setw(20) << "Cho ngoi" << setw(20) << "Dung tich";
    a.xuat();
    OTO b;
    b.nhap();
    cout << "\n\n\t\tThong tin Oto\n";
    cout << setw(20) << "Nhan hieu" << setw(20) << "Nam san xuat" << setw(20) << "Hang" << setw(20) << "Phan phoi";
    b.xuat();
    return 0;
}
