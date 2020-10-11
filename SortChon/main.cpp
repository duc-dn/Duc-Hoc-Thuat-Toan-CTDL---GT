#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

void SelectionSort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[m])
            {
                m = j;
            }
        }
        if (i != m)
        {
            swap(a[i], a[m]);
        }
    }
}
int main()
{
    int a[100];
    int n; cin >> n;
    nhap(a, n);
    xuat(a, n);
    SelectionSort(a, n);
    cout << "\nMang sau khi sap xep la: \n";
    xuat(a, n);
    return 0;
}
