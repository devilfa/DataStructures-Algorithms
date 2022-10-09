#include <bits/stdc++.h>
using namespace std;

void printBoundaryElement(int *arr[], int m, int n)
{
    // m-> no. of rows
    // n-> no. of columns
    // upper row
    if(m==1)
        for(int j=0; j<n; j++)
             cout<<arr[0][j]<<" ";

    else if(n==1)
        for(int i=0; i<m; i++)
             cout<<arr[i][0]<<" ";
    else {
   int i = 0;
   for(int j=0; j<n; j++)
    cout<<arr[i][j]<<" ";

    // right most column
    int j = n - 1;
   for(int i=1; i<m; i++)
    cout<<arr[i][j]<<" ";

    // last row
     i=m-1; 
    for(int j=n-2; j>=0; j--)
    cout<<arr[i][j]<<" ";

    // first column
     j=0;
    for(int i=m-2;i>=1;i--)
        cout<<arr[i][j]<<" ";
        }


}

// void print2dArray(int *arr[], int m, int n)
// {
//     for (int i = 0; i < m; i++)
//     {

//         for (int j = 0; j < n; j++)
//             cout << arr[i][j] << " ";
//         cout << endl;
//     }
// }


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

    printBoundaryElement(arr, m, n);
    return 0;
}
