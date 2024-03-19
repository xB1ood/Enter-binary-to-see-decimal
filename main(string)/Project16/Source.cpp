#include <iostream>
#include <cmath>
#include<vector>
#include <string>
using namespace std;

vector<int> each_digit(string x, vector<int> &v)
{
	vector<int> arr{};
	for (int i = 0; i < size(x);++i) {
		if (x[i] == char(49)) {
			v.push_back(1);
		}
		else {
			v.push_back(0);
		}
	}
	return arr;
}

int main() {
	string num;

	cout << "Enter q to exit" << endl;
	while (num != "q") {
		int ans = 0;
		cout << "Enter a binary number: ";
		cin >> num;
		vector<int> dig_arr = each_digit(num, dig_arr);
		for (int i = 0; i<size(dig_arr); i++)
		{
			ans += dig_arr[i] * pow(2, size(dig_arr)-(i+1));





		}
		if (ans < 0) {
			cout << "Too many numbers" << endl;
			break;
		}
		cout << "Decimal: " << ans;
		cout << "\n\n";
	}

	return 0;
}