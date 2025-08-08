#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int c,n;
    cin >> c >> n;
	string str = "";
	getline(cin, str);

	stringstream stringStream(str);

	vector<int> result;
	int value = 0;
	while (stringStream >> value)
	{
		result.push_back(value);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << ' ';
	}
	cout << endl;

	return 0;
}