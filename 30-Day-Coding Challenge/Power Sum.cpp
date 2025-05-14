//#include <iostream>
//using namespace std;
//
//int Helper(int Total, int Power, int Num)
//{
//	int val = Total - pow(Num, Power);
//	if (val == 0)
//	{
//		return 1;
//	}
//	else if (val < 1)
//	{
//		return 0;
//	}
//
//	return Helper(val, Power, Num + 1) + Helper(Total, Power, Num + 1);
//}
//
//int powerSum(int X, int N)
//{
//	int Count = Helper(X, N, 1);
//
//	return Count;
//}
//
//int main()
//{
//	int count = powerSum(100, 2);
//	cout << "Total Number of Combinatons: " << count << endl;
//}