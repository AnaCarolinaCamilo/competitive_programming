#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main()
{   int x,y, sum;
    string setence;
    cin >> setence;
    if (setence.length() > 3) return 0;
    char digitx = setence[0];
    char digity = setence[2];
    char operation = setence[1];
    string signal(1,operation);
    x = digitx - '0';
    y = digity - '0';
    
    if( signal == "+" && x<=9 && x>=0 && y<=9 && y>=0) sum = x+y;
    else if(signal == "-"&& x<=9 && x>=0 && y<=9 && y>=0) sum = x-y;
    else return 0;
    cout << sum << endl;

    return 0;
}
