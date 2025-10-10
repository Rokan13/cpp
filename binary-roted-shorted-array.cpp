#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int l, int r)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid < r && arr[mid] > arr[mid + 1])
            return mid + 1;
        if (mid > l && arr[mid - 1] > arr[mid])
            return mid;
        if (arr[r] > arr[mid])
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 1;
}

int main()
{
    int n;
    cout<<"size of array= ";
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int pivot = solve(arr, 1, n);
    cout <<"index= "<< pivot << endl;
    cout << arr[pivot] << endl;
    return 0;
}
