#include <iostream>

using namespace std;

int a[100];
int n = 3;
void output(int a[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
}

void sinh(int k)
{
    for (int i = 0; i <= n; i++)
    {
        a[k] = i;
        sinh(k + 1);
        if (k == n)
        {
            output(a, n);
        }
    }
}
int main()
{
    sinh(1);
    return 0;
}
