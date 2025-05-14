//
//#include <iostream>
//#include <vector>
//#include <numeric>
//using namespace std;
//int circularGame(int n, int k);
//
//int main()
//{
//	int C = circularGame(6, 5);
//	cout << C;
//}
////
////int circularGame(int n, int k)
////{
////	vector<int>Game(n);
////
////	iota(Game.begin(), Game.end(), 1);
////
////	 int i = 0;
////	int Count = 1;
////
////
////	while (Game.size() > 1)
////	{
////		if (Count < k)
////		{
////			i = (i + 1) % Game.size();
////			Count++;
////		}
////		else if (Count == k)
////		{
////			int index = i;
////			Game.erase(Game.begin() + i);
////			i = index;
////			Count = 1;
////		}
////
////	}
////
////	return Game[0];
////
////}
//
//
//int josephus(int n, int k) {
//	if (n == 1) return 0;  
//	return (josephus(n - 1, k) + k) % n;
//}
//
//int circularGame(int n, int k) {
//	return josephus(n, k) + 1;  
//}