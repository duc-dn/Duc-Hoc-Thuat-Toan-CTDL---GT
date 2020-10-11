#include <iostream>

using namespace std;

void selectionSort(int a[], int n)
{
    int m;
    for (int i = 0; i < n - 1; i++)
    {
        m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[m])
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
    int n; cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {

        cout << a[i] << "\t";
    }
    selectionSort(a, n);
    for (int i = 0; i < n; i++)
    {

        cout << a[i] << "\t";
    }
    return 0;
}
