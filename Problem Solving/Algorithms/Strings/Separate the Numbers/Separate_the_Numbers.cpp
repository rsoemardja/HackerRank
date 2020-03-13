#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

// Complete the separateNumbers function below.


int main()
// Declarations.
int n;
string s;
cin >> n;

// For each query
while (n--)
{
	cin >> s;
	bool valid = false;
	long firstx = -1;

	// Try each possible starting number
	for (int i = 1; i <= s.length() / 2; ++i) {
		long x = stol(s.substr(0, i));
		firstx = x;
		// Build up sequence starting with this number
		string test = to_string(x);
		while (test.length() < s.length()) {
			test += to_string(++x);
		}

		// Compare to original
		if (test == s) {
			valid = true;
			break;
		}
	}
	valid ? cout << "YES " << firstx << endl : cout << "NO" << endl;
}
return 0;
}
