#include <iostream>

using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i <n; i++)
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

void selectionSort(int a[], int n)
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
    input(a, n);
    output(a, n);
    cout <<endl;
    selectionSort(a, n);
    output(a, n);
    return 0;
}
