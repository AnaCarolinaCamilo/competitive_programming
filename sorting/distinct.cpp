#include <bits/stdc++.h>

using namespace std;
const int s = 200000;
int main(int argc, char const *argv[])
{
    long long int size;
    cin >> size;
    if(size == 0){
        cout<<0;
        return 0;
    }
    int arr[s];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; 
    }
    sort(arr,arr + size);
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if(arr[i] != arr[i-1]) {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}
