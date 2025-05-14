//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> icecreamParlor(int m, vector<int> arr)
//{
//	int Index = 0;
//	int i = Index + 1;
//	int Size = arr.size();
//	vector<int> Indices(0, 2);
//	while (Index < Size)
//	{
//		if (arr[Index] + arr[i % Size] == m)
//		{
//			Indices.push_back(Index + 1);
//			Indices.push_back((i % Size) + 1);
//			break;
//		}
//
//		if (i % Size == 0)
//		{
//			Index++;
//			i = Index + 1;
//		}
//		else
//		{
//			i++;
//		}
//	}
//
//	return Indices;
//}
//
//int main()
//{
//	vector<int>Array;
//
//	Array.push_back(1);
//	Array.push_back(4);
//	Array.push_back(5);
//	Array.push_back(3);
//	Array.push_back(2);
//
//
//	vector<int>Result = icecreamParlor(4, Array);
//	cout << Result[0] << " " << Result[1] << endl;
//
//	return 0;
//}