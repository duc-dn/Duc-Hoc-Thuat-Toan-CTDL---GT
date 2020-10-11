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
    cout << endl;
}

void sinh(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        a[i] = j;
        if (i == n)
        {
            output(a, n);
        }
        else
        {
            sinh(i + 1);
        }
    }

}
int main()
{
    sinh(1);
    return 0;
}
