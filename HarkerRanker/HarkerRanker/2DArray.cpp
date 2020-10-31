#include <bits/stdc++.h>
#include <algorithm>
00064 #include <algorithm>
00065 #include <bitset>
00066 #include <complex>
00067 #include <deque>
00068 #include <exception>
00069 #include <fstream>
00070 #include <functional>
00071 #include <iomanip>
00072 #include <ios>
00073 #include <iosfwd>
00074 #include <iostream>
00075 #include <istream>
00076 #include <iterator>
00077 #include <limits>
00078 #include <list>
00079 #include <locale>
00080 #include <map>
00081 #include <memory>
00082 #include <new>
00083 #include <numeric>
00084 #include <ostream>
00085 #include <queue>
00086 #include <set>
00087 #include <sstream>
00088 #include <stack>
00089 #include <stdexcept>
00090 #include <streambuf>
00091 #include <string>
00092 #include <typeinfo>
00093 #include <utility>
00094 #include <valarray>
00095 #include <vector>
using namespace std;



int main()
{
	vector<vector<int>> arr(6);
	for (int i = 0; i < 6; i++) {
		arr[i].resize(6);

		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	vector<int> sumArr;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
		int sum = arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 1][j + 1] +
				arr[i][j + 2] + arr[i + 1][j + 2] + arr[i + 2][j + 2];
			sumArr.push_back(sum);
		}
	}
	sort(sumArr.begin(), sumArr.end(),std::greater<int>());
	cout << sumArr[0] << endl;


	return 0;
}
