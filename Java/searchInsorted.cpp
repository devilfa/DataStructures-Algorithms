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

pair<int,int> searchInSorted(int *arr[], int m, int n, int x)
{
    int top=0;
    int right = n-1;
    pair<int,int> pos;
    pos.first=-1;
    pos.second=-1;
    while(top<=m-1 && right>=0){
        if(arr[top][right] == x){
            pos.first = top;
            pos.second = right;
            return pos;
        }
        else if(x<arr[top][right])
            right--;
        else
            top++;
             
    }
    return pos;
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
                cin>>arr[i][j] ;

    int x;
    cin>>x;

    pair<int,int> pos = searchInSorted(arr, m, n, x);
    cout<<pos.first<<" "<<pos.second;
    
    return 0;
}
