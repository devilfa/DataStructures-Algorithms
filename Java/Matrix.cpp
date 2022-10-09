#include <bits/stdc++.h>
using namespace std;


 void print2dArray(int *arr[],int m, int n){
     for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
           cout<<arr[i][j]<<" ";

    }

int main()
{
    // 1st Method -> 2D array
    int m = 3,n = 2;
    // int arr[m][n];
    // for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //         arr[i][j] = i + j;

    // // printing 2d Array
    //  for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //        cout<<arr[i][j]<<" ";

    // 2nd Method 1 -> double pointers
    // int **arr;
    // arr = new int*[m];
    // for(int i=0;i<m;i++)
    //     arr[i]=new int[n];

    //  for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //         arr[i][j] = i + j;

    // // printing 2d Array
    //  for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //        cout<<arr[i][j]<<" ";
    
    //  2nd Method 2 -> Arrays of pointers
    // int *arr[m];
    // for(int i=0;i<m;i++)
    //     arr[i]=new int[n];

    //  for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //         arr[i][j] = i + j;

    // // // printing 2d Array
    //     print2dArray(arr,m,n);

    //  3rd Method -> Arrays of vectors
    // row is fixed
    //  vector <int> arr[m];

    //  for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //         arr[i].push_back(i + j);

    // // printing 2d Array
    //  for(int i=0;i<m;i++)
    //     for(int j=0;j<n;j++)
    //        cout<<arr[i][j]<<" ";

    //  4th Method -> vectors of vectors
    // row is also dynamic
    //  vector <vector <int> >arr;

    //  for(int i=0;i<m;i++)
    //    { vector<int> v;
    //     for(int j=0;j<n;j++)
    //         v.push_back(i + j);
    //     arr.push_back(v);
    //     }

    // // printing 2d Array
    //  for(int i=0;i<arr.size();i++)
    //     for(int j=0;j<arr[i].size();j++)
    //        cout<<arr[i][j]<<" ";

    return 0;
}
