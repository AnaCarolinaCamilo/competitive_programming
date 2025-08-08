#include <bits/stdc++.h>

using namespace std;

vector <pair<int,int>> solve(vector<int>& arr, int type){
    int n = arr.size();
    vector<pair<int,int>> ans;
    for (int i = 0; i < n; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
           if(arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j+1]);
            ans.push_back({type, j+1});
            swapped = true;
           }
        }
        if(!swapped) break;
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int nc;
    cin >> nc;
    while (nc--)
    {
        int n;
        cin>>n;
        vector<int> arr(n), brr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < n; i++) cin >> brr[i];

        vector<pair<int,int>> ans; // guarda os tipos da operação e o index
        for (int i = 0; i < n; i++)
        {
            if(arr[i] > brr[i]) {
                swap(arr[i], brr[i]);
                ans.push_back({3,i + 1});
            }
        }
        vector<pair<int,int>> count1 = solve(arr,1);
        vector<pair<int,int>> count2 = solve(brr,2);

        for (auto& p : count1) ans.push_back(p);
        for (auto& p : count2) ans.push_back(p);

        cout << ans.size() << '/n';
        for(auto& p : ans)  {
            cout << p.first << " " << p.second << '\n';
        }
    }
    
    return 0;
}
