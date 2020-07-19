#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class AnagramMap
{
public:
	void push(string s) noexcept
	{
		sort(s.begin(), s.end());
		auto r = map.emplace(std::move(s), 1);
		if (!r.second)
		{
			r.first->second++;
		}
	}
	int Count() const noexcept
	{
		return  accumulate(map.begin(), map.end(), 0, [](auto& acc, auto& v) {
			return acc + (v.second * (v.second - 1) / 2);
			});
	}
private:
	unordered_map<string, int> map;
};

// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) {
	AnagramMap map;
	for (auto i = s.begin(); i < s.end(); ++i)
	{
		auto a = i;
		for (auto j = i; j < s.end(); j++)
		{
			map.push(string(i, j + 1));
			auto b = j+1;
			auto s = string(i, j + 1);
		}
	}
	return map.Count();

}

int main()
{
	//ofstream fout(getenv("OUTPUT_PATH"));

	int q;
	cin >> q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for (int q_itr = 0; q_itr < q; q_itr++) {
		string s;
		getline(cin, s);

		int result = sherlockAndAnagrams(s);

		cout << result << "\n";
	}

	//fout.close();

	return 0;
}
