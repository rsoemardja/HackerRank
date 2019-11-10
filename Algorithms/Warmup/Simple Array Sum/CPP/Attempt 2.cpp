#include <iostream>
using namespace std;
/*
    *Write your code here
*/
int main() {

   int n,sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;cin >> a;
        sum+=a;
    }
    cout << sum << endl;
    return 0;
}
Posted b