#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int ss[] = { 104,97,99,107,101,114,114,97,110,107 };
    int ss_l = 10;
    int ss_ind = 0;
    for (int i = 0; i < s.size() && ss_ind < ss_l; i++) {
        if (ss_ind < ss_l && (int)s[i] == ss[ss_ind]) {
            ss_ind++;
        }
    }
    return (ss_ind == ss_l) ? "YES" : "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
