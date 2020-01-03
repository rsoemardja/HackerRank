#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        int N, Q;
        cin >> N >> Q;
        int** Sequence = new int* [N];
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            int* seq = new int[k];
            for (int j = 0; j < k; j++) {
                cin >> seq[j];
            }
            Sequence[i] = seq;
        }
        for (int i = 0; i < Q; i++) {
            int j, k;
            cin >> j >> k;
            cout << Sequence[j][k] << endl;
        }

    
    return 0;
}