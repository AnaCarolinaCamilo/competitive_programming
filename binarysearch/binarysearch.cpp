#include <bits/stdc++.h>

using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (x == array[mid])
      return mid;

    if (x > array[mid])
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}


int main()
{
    int q, n, x;
    cin >> n >> q;
    int arr[n];
    for (int i = 1; i < n+1; i++)
    {
        cin >> arr[i];
    }
    int j = 0;
    while (j < q)
    {
        cin >> x;
        int low = 1;
        int high = n;
        int result = binarySearch(arr,x,low,high);
        cout << result << endl;
        j++;
    }
    return 0;
}