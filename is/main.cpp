#include <iostream>

using namespace std;

void output(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

void is(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int t = a[i];
        int j = i - 1;
        while (j >= 0 && t > a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
}

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int main()
{
    int a[100];
    int n; cin >> n;
    input(a, n);
    output(a, n);
    cout << endl;
    is(a, n);
    output(a, n);
    return 0;
}
