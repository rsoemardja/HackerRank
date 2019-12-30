#include <bitsstdc++.h>

using namespace std;

vector<string> split_string(string);

/*
Complete the simpleArraySum function below 
*/
int simpleArraySum(vector<int> ar) {
	/*
	Write your code here
	*/

}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int ar_count;
	cin >> ar_count;
	cin.ignore(numeric_limits < streamsize::max(), '\n');

	string ar_temp_temp;
	getline(cin, ar_temp_temp);

	vector<string> ar_temp = split_string(ar_temp_temp);

	vector<int> ar(ar_count);

	for (int ar_itr = 0; ar_itr < ar_count; ar_itr++) {
		int ar_item = stoi(ar_temp[ar_itr]);

		ar[ar_itr] = ar_item;
	}

	int result = simpleArraySum(ar);

	fout << result << "\n";

	fout.close();

	return 0;
}

