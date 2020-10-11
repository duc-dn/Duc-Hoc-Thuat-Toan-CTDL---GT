#include <iostream>

using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

bool searchBinary(int a[], int n, int x)
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
            return true;
        }
    }
    return false;
}

int binary(int a[], int l, int r, int key)
{
    if (r < l)
    {
        return -1;
    }
    else
    {
        int m = (l + r) / 2;
        if (a[m] == key)
        {
            return m;
        }
        else if (a[m] > key)
        {
            return binary(a, l, m - 1, key);
        }
        else
        {
            return binary(a, m + 1, r, key);
        }
    }
}
int main()
{
    int a[100];
    int n; cin >> n;
    input(a, n);
    output(a, n);
    int x;
    cout << "\nNhap so can tim kiem: ";
    cin >> x;
    bool ok = searchBinary(a, n, x);
    if (ok == true)
    {
        cout << "\nTim thay";
    }
    else{
        cout << "\nKhong tim thay";
    }
    int c = binary(a, 0, n - 1, x);
    cout << endl;
    cout << c;
    return 0;
}
