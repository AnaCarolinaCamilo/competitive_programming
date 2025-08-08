#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 3.141592653, area;
    double r;
    cin >> r;
    area = (pi * (r*r));
    cout << setprecision(9);
    cout << fixed << area << endl;

    return 0;
}
