#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr) {
    map<char, int> m;
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr[i].size(); j++)
            if (m[arr[i][j]] == i)    m[arr[i][j]] = i + 1;

    map<char, int>::iterator it = m.begin();
    while (it != m.end())
    {
        if (it->second == arr.size())
            count++;
        it++;
    }
    return count;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
