//#include <bits/stdc++.h>
//
//using namespace std;
//
//template <class T>
//inline void hash_combine(std::size_t& seed, const T& v)
//{
//	std::hash<T> hasher;
//	seed ^= hasher(v) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//}
//
//class Signatrue
//{
//public:
//	void Push(char c)
//	{
//		counts[c - 'a']++;
//	}
//	bool operator ==(const Signatrue& rhs)const
//	{
//		return counts == rhs.counts;
//	}
//	size_t Hash() const
//	{
//		size_t hash = 0;
//		for (auto v : counts)
//		{
//			hash_combine(hash, v);
//		}
//		return hash;
//	}
//private:
//	array<char, 26> counts{};
//};
//
//namespace std {
//	template<> struct hash<Signatrue>
//	{
//		size_t operator()(const Signatrue& s)const {
//			return s.Hash();
//		}
//	};
//};
//
//class AnagramMap
//{
//public:
//	// void push(string s) noexcept
//	// {
//	//     sort(s.begin(),s.end());
//	//     auto r = map.emplace(std::move(s),1);
//	//     if(!r.second)
//	//     {
//	//         r.first->second++;
//	//     }
//	// }
//	void push(const Signatrue& sig) noexcept
//	{
//		auto r = map.emplace(sig, 1);
//		if (!r.second)
//		{
//			r.first->second++;
//		}
//	}
//
//
//	int Count() const noexcept
//	{
//		return  accumulate(map.begin(), map.end(), 0, [](auto& acc, auto& v) {
//			return acc + (v.second * (v.second - 1) / 2);
//			});
//	}
//private:
//	//unordered_map<string, int> map;
//	unordered_map<Signatrue, int> map;
//};
//
//// Complete the sherlockAndAnagrams function below.
//int sherlockAndAnagrams(string s) {
//	AnagramMap map;
//	for (auto i = s.begin(); i < s.end(); ++i)
//	{
//		Signatrue sig;
//		for (auto j = i; j < s.end(); j++)
//		{
//			sig.Push(*j);
//			map.push(sig);
//		}
//	}
//	return map.Count();
//
//}
//
//int main()
//{
//	//ofstream fout(getenv("OUTPUT_PATH"));
//
//	int q;
//	cin >> q;
//	cin.ignore(numeric_limits<streamsize>::max(), '\n');
//
//	for (int q_itr = 0; q_itr < q; q_itr++) {
//		string s;
//		getline(cin, s);
//
//		int result = sherlockAndAnagrams(s);
//
//		cout << result << "\n";
//	}
//
//	//fout.close();
//
//	return 0;
//}
