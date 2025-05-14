//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string gameOfThrones(string s);
//
//int main()
//{
//	string s;
//	getline(cin, s);
//
//	string result = gameOfThrones(s);
//
//	cout << result << "\n";
//
//	return 0;
//}
//
//string gameOfThrones(string s)
//{
//	size_t length = s.length();
//	bool Even = false;
//	bool odd = false;
//	size_t i = 0;
//	size_t count = 0;
//	int Freq[26] = { 0 };
//
//
//	for (size_t i = 0; i < length; i++)
//	{
//		Freq[s[i] - 'a']++;
//	}
//
//	for (size_t i = 0; i < 26; i++)
//	{
//		if (Freq[i] % 2 != 0)
//		{
//			count++;
//		}
//	}
//	
//
//	if (count <= 1)
//	{
//		return "YES";
//	}
//	else
//	{
//		return "NO";
//	}
//}