#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int m, num;
    cin >> m;
    vector<int> vec;
    for (int i = 0; i < m; i++) {
        cin >> num;
        vec.push_back(num);
    }
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        vector<int>::iterator low = lower_bound(vec.begin(), vec.end(), val);
        if (vec[low - vec.begin()] == val)
            cout << "Yes " << (low - vec.begin() + 1) << endl;
        else
            cout << "No " << (low - vec.begin() + 1) << endl;
    }
    return 0;
}
