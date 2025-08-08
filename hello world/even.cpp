#include <iostream>

using namespace std;

int main()
{
    long long int numberin, evenumber;    
    cin >> numberin;
    if (numberin <= 0)
    {
        return 0;
    }
    else if (numberin%2 == 0){
      evenumber = numberin + 2;
    }
    else{
      evenumber = numberin + 1;
    }
    cout << evenumber << endl;
    return 0;
}
