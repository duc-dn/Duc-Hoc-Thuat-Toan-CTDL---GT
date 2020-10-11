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

int printMaxActivities(int s[], int f[], int n)
{

    // The first activities always gets selected
    int i = 0;
    int c = 1;
    for (int j = 1; j < n; j++)
    {
        if (s[j] > f[i])
        {
            c++;
            i = j;
        }
    }
    return c;
}
int main()
{
    int s[100], f[100];
    int n; cin >> n;
    input(s, n);
    output(s, n);
    input(f, n);
    output(f, n);
    cout << "\nThe activities are selected";
    cout << printMaxActivities(s, f, n);
    return 0;
}
