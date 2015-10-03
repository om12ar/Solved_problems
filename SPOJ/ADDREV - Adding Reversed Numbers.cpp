#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main(){

	int testcases;
	cin >> testcases;


	while (testcases--){
		string num1, num2;
		cin >> num1 >> num2;
		reverse(num1.begin(), num1.end());
		reverse(num2.begin(), num2.end());
		int x, y;
		stringstream ss;
		ss << num1;
		ss >> x;
		ss.clear();
		ss << num2;
		ss >> y;
		ss.clear();

		x += y;
		ss << x;
		ss >> num1;
		ss.clear();
		reverse(num1.begin(), num1.end());
		ss << num1;
		ss >> x;

		cout << x << endl;
	}

	return 0;

}
