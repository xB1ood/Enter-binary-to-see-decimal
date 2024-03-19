#include <iostream>
#include <cmath>
#include<vector>
using namespace std;

vector<int> each_digit(int x, vector<int> &v)
{
	vector<int> arr{};
	int dig = x % 10;
	v.push_back(dig);

	if (x >= 10) {
		each_digit(x / 10, v);			//Разбивает числа на дигиты и передает их в созданный массив
	}

	return arr;
}

int main() {
	int num = 0;

	cout << "Enter -1 to exit" << endl;
	while(num!=-1){
		int ans = 0;
		cout << "Enter a binary number: ";
		cin >> num;
			
		vector<int> dig_arr = each_digit(num, dig_arr);  // Не работает с числами которые в десятичной системе >1023
		dig_arr.reserve(100);
		for (int i = size(dig_arr) - 1; i >= 0; i--)
		{
			ans += dig_arr[i] * pow(2, i);





		}
		if (ans > 1023) {
			cout << "Cant count such a large number" << endl;
			break;
		}
		cout << "Decimal: " << ans;
		cout << "\n\n";
	}

	return 0;
}