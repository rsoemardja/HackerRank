#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
    set<char> st;
    for (char ch : s)
        if (ch != ' ') st.insert(tolower(ch));
    if (st.size() == 26) return "pangram";
    else return "not pangram";


}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
