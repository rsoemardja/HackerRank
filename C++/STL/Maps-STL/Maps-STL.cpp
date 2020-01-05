#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string, int> mp;
    int q;
    cin >> q;
    string s;
    int mark;
    int type;
    for (int i = 0; i < q; i++) {
        cin >> type;
        if (type == 1) {
            cin >> s >> mark;
            mp[s] += mark;
        }
        else if (type == 2) {
            cin >> s;
            mp[s] = 0;
        }
        else if (type == 3) {
            cin >> s;
            cout << mp[s] << endl;
        }
    }
    return 0;
}



