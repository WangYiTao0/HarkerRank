//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//int main() {
//	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
//	int rowNum, questionNum;
//	cin >> rowNum >> questionNum;
//
//	vector<int> arr;
//	vector<vector<int>> arrNum;
//	int dataSize;
//	int data;
//	for (int row = 0; row < rowNum; row++)
//	{
//		cin >> dataSize;
//		for (int size = 0; size < dataSize; size++)
//		{
//			cin >> data;
//			arr.push_back(data);
//		}
//		arrNum.push_back(arr);
//		arr.clear();
//	}
//
//	int i, j;
//	vector<int> result;
//
//	for (int q = 0; q < questionNum; q++)
//	{
//		cin >> i >> j;
//		result.push_back(arrNum[i][j]);
//	}
//
//	for (auto r : result)
//	{
//		cout << r << endl;
//	}
//	return 0;
//}