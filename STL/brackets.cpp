#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s)
{
    stack<char> brackets; // declarando pilha
    for (char &c : s)
    {
        if (c == '[' || c == '{' || c == '(')
        {
            brackets.push(c); // puxando os caracteres pro stack (pilha)
        }
        else
        {
            if (brackets.empty() || abs(brackets.top() - c) > 2)
                return "NO";
            else
                brackets.pop();
        }
    }
    if (brackets.empty())
        return "YES";
    return "NO"; // ainda existe parênteses abertos no stack
}
int main()
{
    string teste, resultado;
    int n;
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cin >> teste;
        resultado = isBalanced(teste);
        cout << resultado << endl;
        i++;
    }
    return 0;
}
