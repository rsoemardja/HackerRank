#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
// <iomanip> is assigning some parametric manipulators 
#include <iomanip>
#include <algorithm>
using namespace std;


double medianVector(const vector<int> &nums) {

	if (nums.size() % 2)
		return nums[nums.size() / 2];
	else
		return (double)(nums[nums.size() / 2] + nums[nums.size() / 2 - 1]) / 2.0;
}

vector <double> quartiles(vector<int> nums) {

	sort(nums.begin(), nums.end());

	double q[3];
	if (nums.size() % 2) {
		int mid = nums.size() / 2;
		q[1] = nums[mid];
		q[0] = medianVector(
			vector<int>(nums.begin(), nums.begin() + mid));
		q[2] = medianVector(
			vector<int>(nums.begin() + mid + 1, nums.end()));
	}
	else
	{
		int midL = nums.size() / 2 - 1;
		q[1] = (double)(nums[midL] + nums[midL + 1]) / 2.0;
		q[0] = medianVector(vector<int>(nums.begin(), nums.begin() + midL + 1));
		q[2] = medianVector(vector<int>(nums.begin() + midL + 1, nums.end()));
	}

	return vector<double>(q, q + sizeof(q) / sizeof(double));
}

int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int N;
	cin >> N;

	vector<int> nums;
	int x;
	for (int i = 0; i < N; i++) {
		cin >> x;
		nums.push_back(x);
	}

	vector<double> res = quartiles(nums);
	cout << fixed << setprecion(0);
	for ( int i = 0; i < 3; i++)
		cout << res[i] << endl;

	return 0;
}
