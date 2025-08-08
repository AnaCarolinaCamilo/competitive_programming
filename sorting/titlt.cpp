#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<pair<int,int>,int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            int a,b,c;
            cin >> a >> b >> c;
            arr[i] = {{a,b},c};
        }
        
        sort(arr.begin(), arr.end());
        int i = 0;
        while(true)
        {
            if( i >= n) break;
            int a = arr[i].first.first;
            int b = arr[i].first.second;
            int c = arr[i].second;

            if(k > a && k > b){
                k = max(k,c);
                i++;
            } else if (a <= k && k <= b)
            {
               cout << a << "  "<<k<<"  "<<b<<endl;
               k = max(k,c);
               i++;
            }else if(k < a){
                break;
            }
            else{
                i++;
            }

        }
        cout << k << endl;
        
    }
    
    return 0;
}
