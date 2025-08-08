#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int x, int low, int high)
{
    int res = -1;
    while (low <= high)
    {
        int mid = high + (low - high) / 2;

        if (array[mid] >= x)
        {
            res = mid + 1;
            high = mid - 1;
        }

        else
            low = mid + 1;
    }

    return res;
}


int main()
{
    int q, temp, n, x;
    cin >> n >> q;
    vector<long> v;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;

        cout << binarySearch(arr, x, 0, n - 1) << endl;
    }

    return 0;
}

