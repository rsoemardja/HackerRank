#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

using std::cin;
using std::cout;
using std::end;

int main() {

	int n;
	cin >> n;

	int a[n] = {};

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;
}