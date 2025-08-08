#include <iostream>

using namespace std;

int main()
{
    int lastN, lastM, sum;
    long long int N,M;
    cin >> N >> M;
    lastN = N % 10;
    lastM = M % 10;
    sum = lastM + lastN;
    cout << sum << endl;


    return 0;
}
