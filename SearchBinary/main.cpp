#include <iostream>

using namespace std;

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

int searchBinary(int a[], int n, int x)
{
    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x > a[mid])
        {
            l = mid + 1;
        }
        else if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;

}
int main()
{
    int a[100];
    int n;
    cin >> n;
    nhap(a, n);
    int x;
    cout << "Nhap gia tri can tim kiem: ";
    cin >> x;
    if (searchBinary(a, n, x) == -1)
    {
        cout << "\nKhong tim thay x trong mang";
    }
    else
    {
        cout << "\nx Xuat hien o vi tri thu " << searchBinary(a, n, x);
    }
    return 0;
}
