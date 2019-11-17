#include <iostream>
using namespace std;

int factorial(int n) {
	int result = 0;
	if (n == 1) {
		result = 1;
	}
	else {
		result = factorial(n - 1) * n;
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	int result = factorial(n);
	cout << result << endl
		return 0;
}