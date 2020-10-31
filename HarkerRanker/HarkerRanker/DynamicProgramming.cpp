#include "stdc++.h"

using namespace std;

vector<string> split_string(string);


// using iter = vector<int>::const_iterator;

// int EvalSubarray(iter begin, iter end)
// {
//     const auto n = end - begin;
//     if( n == 1 )
//     { 
//         return max(*begin,0);
//     }
//     else if ( n == 2)
//     {
//         return max(*(end-1), EvalSubarray(begin,end-1));
//     }

//     return  max(*(end-1) + EvalSubarray(begin ,end-2), EvalSubarray(begin,end-1));
// }

// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {

	//return EvalSubarray(arr.begin(), arr.end());
	if (arr.size() == 1)
	{
		return max(arr.back(), 0);
	}
	vector<int> tab;

	tab.resize(arr.size());

	tab[0] = max(arr[0], 0);
	tab[1] = max(arr[1], tab[0]);

	for (size_t i = 2; i < arr.size(); i++)
	{
		tab[i] = max(arr[i] + tab[i - 2], tab[i - 1]);
	}
	return tab.back();

}

int main()
{
	ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string arr_temp_temp;
	getline(cin, arr_temp_temp);

	vector<string> arr_temp = split_string(arr_temp_temp);

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[i]);

		arr[i] = arr_item;
	}

	int res = maxSubsetSum(arr);

	fout << res << "\n";

	fout.close();

	return 0;
}

vector<string> split_string(string input_string) {
	string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
		return x == y and x == ' ';
		});

	input_string.erase(new_end, input_string.end());

	while (input_string[input_string.length() - 1] == ' ') {
		input_string.pop_back();
	}

	vector<string> splits;
	char delimiter = ' ';

	size_t i = 0;
	size_t pos = input_string.find(delimiter);

	while (pos != string::npos) {
		splits.push_back(input_string.substr(i, pos - i));

		i = pos + 1;
		pos = input_string.find(delimiter, i);
	}

	splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

	return splits;
}
