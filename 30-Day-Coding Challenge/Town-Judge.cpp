//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//int findTownJudge(int n, vector<vector<int>> trust) {
//
//	vector<bool>Trust(n, false);
//	vector<int>Count(n, 0);
//
//	for (const auto& t : trust)
//	{
//		int a = t[0];
//		int b = t[1];
//
//		Trust[a] = true;
//		Count[b]++;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		if (Count[i] == 2 && !Trust[i])
//		{
//			return i;
//		}
//	}
//
//	return -1;
//}