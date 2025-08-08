#include <bits/stdc++.h>

using namespace std;

int main()
{
    int apertos_N, seconds_C;
    cin >> apertos_N >> seconds_C;
    int t[apertos_N];
    for (int i = 0; i < apertos_N; i++)
    {
        cin >> t[i];
    }
    int resp = 1;
    int antes = t[0];

    for (int i = 0; i < apertos_N; i++)
    {
        if(t[i] - antes >= seconds_C){
            resp++;
            antes = t[i];
        }
    }
    
    cout << resp << endl;
    return 0;
}

using namespace std;

int main()
{
    int apertos_N, seconds_C;
    cin >> apertos_N >> seconds_C;
    int t[apertos_N];
    for (int i = 0; i < apertos_N; i++)
    {
        cin >> t[i];
    }
    int resp = 1;
    int antes = t[0];

    for (int i = 0; i < apertos_N; i++)
    {
        if(t[i] - antes >= seconds_C){
            resp++;
            antes = t[i];
        }
    }
    
    cout << resp << endl;
    return 0;
}
