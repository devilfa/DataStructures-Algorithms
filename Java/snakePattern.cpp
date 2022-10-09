#include <bits/stdc++.h>
using namespace std;

void print2dArray(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

void printSnakePattern(int *arr[], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        if (i & 1)
        {
            for (int j = n - 1; j >= 0; j--)

                cout << arr[i][j] << " ";
        }
        else
        {
            for (int j = 0; j < n; j++)

                cout << arr[i][j] << " ";
        }

        // cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int val = 1;
    int *arr[m];
    for (int i = 0; i < m; i++)
        arr[i] = new int[n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = val++;

    printSnakePattern(arr, m, n);
    return 0;
}
