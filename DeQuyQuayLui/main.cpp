#include <iostream>

using namespace std;

int a[4];
int n = 3;

void inKQ(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] ;
    }
    cout << endl;
}

void Try(int i)
{
    if (i > n)
    {
        inKQ(a, n);
    }
    else
    {
        a[i - 1] = 0;
        Try(i + 1);
        a[i - 1] = 1;
        Try(i + 1);
    }
}
int main()
{
    Try(1);
    return 0;
}
