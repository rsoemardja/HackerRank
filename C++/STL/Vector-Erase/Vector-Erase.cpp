#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector <int> vec;
    int n;
    int x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    int q1, q2, q3;
    cin >> q1;
    cin >> q2 >> q3;
    vec.erase(vec.begin() + (q1 - 1));
    vec.erase(vec.begin() + q2 - 1, vec.begin()+q3 - 1);
    cout << vec.size() << endl;
    for (int i = 0; i < vec.size(); i++)
        cout << vec.at(i) << " ";

    return 0;
}
