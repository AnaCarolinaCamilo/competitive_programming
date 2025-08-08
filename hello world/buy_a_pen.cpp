#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int R,G,B;
    string C;
    cin >> R >> G >> B;
    cin >> C;
    for (size_t i = 0; i < C.length(); ++i) {
        C[i] = tolower(static_cast<unsigned char>(C[i]));
    }
    if(C == "red") cout << min(G,B)<< endl;
    else if(C == "green") cout << min(R,B)<< endl;
    else if(C == "blue") cout << min(G,R)<< endl;
    else return 0;
    

    return 0;
}
