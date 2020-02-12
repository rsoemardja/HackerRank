#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define f(x, p, q) ( (x * p) + q)

typedef unsigned long long ULONG;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, s, p, q;
    cin >> n >> s >> p >> q;

    ULONG p_231 = static_cast<ULONG> (pow(2, 31));

    ULONG x0 = s % p_231;
    ULONG vals = 1;

    ULONG tort = f(x0, p, q) % p_231;
    ULONG hare = f(x0, p, q) % p_231;
    
    hare = f(hare, p, q) % p_231;

    while (tort != hare) {
        if (vals >= n) {
            cout << vals << endl;
            return 0;
        }
        else {
            vals++;
        }
        tort = f(tort, p, q) % p_231; // x0
        hare = f(hare, p, q) % p_231; // p
        hare = f(hare, p, q) % p_231; // q
    }

    ULONG mu = 0;
    tort = x0;
    while (tort != hare) {
        tort = f(tort, p, q) % p_231;
        hare = f(hare, p, q) % p_231;
        mu++;
    }

    ULONG lam = 1;
    hare = f(tort, p, q) % p_231;
    while (tort != hare) {
        hare = f(hare, p, q) % p_231;
        lam++;
    }
    cout << lam + mu << endl;

        return 0;
}

