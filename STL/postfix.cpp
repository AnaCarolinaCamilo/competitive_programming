#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<double> stack;
    string input;
    getline(cin, input);
    stringstream ss(input);
    string token;

    while (ss >> token)
    {  
       
        if (token == "+" || token == "-"|| token == "*" || token == "/" || token == "%" || token == "^"){
            if (stack.size() < 2) {
                return 1;
            }
            double op2 = stack.top();
            stack.pop();
            double op1 = stack.top();
            stack.pop();
           
            double val;

            if(token == "+") val = op1 + op2;
            else if(token == "-") val = op1 - op2;
            else if(token == "*") val = op1 * op2;
            else  if(token  == "/"){
              if (op2 == 0){
                return 0;
               }
               val = op1 / op2;
               
            }
            else if (token == "^") val = pow(op1, op2);
            else if (token == "%") val = fmod(op1,op2);
            
            stack.push(val);
           
        }
        else{
            stack.push(stod(token));
        }

    }
      cout << setprecision(6) << stack.top() << endl;

    return 0;
}
