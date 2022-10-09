#include <bits/stdc++.h>
using namespace std;

void rotate90(int *arr[], int n)
{
    // Naive Method -> AuxSpace - o(n2)
                    // int *temp[n];
                    // for(int i=0;i<n;i++)
                    //     temp[i] = new int[n];
                    // for(int j=n-1;j>=0;j--){
                    //     for(int i=0;i<n;i++)
                    //         temp[n-1-j][i] = arr[i][j];
                    //     }
                    // for(int i=0;i<n;i++){
                    //     for(int j=0;j<n;j++)
                    //         arr[i][j] = temp[i][j];
                    // }

    //   -------------------------------------------------------------------------------------------------------------------          
    // reversing each row

   for(int i=0;i<n;i++){
       reverse(arr[i][0],arr[i][0]+n);
   }

    // transpose
    for(int i=0;i<n;i++)
        {for(int j=i+1;j<n;j++)
            swap(arr[i][j],arr[j][i]);}

}

void print2dArray(int *arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}


int main()
{
    int n;
    cin>> n;
    int val = 1;
    int *arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            arr[i][j] = val++;

    rotate90(arr,n);
    print2dArray(arr,n);
    return 0;
}
