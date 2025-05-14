////
////
////#include <iostream>
////#include <vector>
////using namespace std;
////vector <int> CircularaRotation(vector<int>a, size_t P, vector<int>queries);
////
////int main()
////{
////	vector<int>a(3);
////
////	for (size_t i = 0; i < a.size(); i++)
////	{
////		a[i] = i + 1;
////	}
////
////	vector<int>queries(3);
////
////	for (size_t i = 0; i < queries.size(); i++)
////	{
////		queries[i] = i;
////	}
////
////	vector<int>Result = CircularaRotation(a, 2, queries);
////
////	for (size_t i = 0; i < Result.size(); i++)
////	{
////		cout << Result[i] << " ";
////	}
////
////}
////
////vector <int> CircularaRotation(vector<int>a, size_t k, vector<int>queries)
////{
////
////	vector<int>Q(queries.size());
////	size_t Size = a.size();
////	for (size_t i = 0; i < k; i++)
////	{
////		size_t temp = a[Size - 1];
////		for (size_t j = Size - 1; j > 0; j--)
////		{
////			a[j] = a[j - 1];
////
////		}
////
////		a[0] = temp;
////	}
////
////	for (size_t i = 0; i < Q.size(); i++)
////	{
////		Q[i] = a[queries[i]];
////	}
////
////	return Q;
////
////}
//
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> CircularaRotation(vector<int> a, size_t k, vector<int> queries) {
//	size_t n = a.size();
//	k = k % n;  
//
//	vector<int> rotated(n);
//
//	
//	for (size_t i = 0; i < n; i++) {
//		size_t newIndex = (i + k) % n;
//		rotated[newIndex] = a[i];
//	}
//
//	
//	vector<int> result;
//	for (size_t i = 0; i < queries.size(); i++) {
//		result.push_back(rotated[queries[i]]);
//	}
//
//	return result;
//}
//
//int main() {
//	vector<int> a(3);
//
//	for (size_t i = 0; i < a.size(); i++) {
//		a[i] = i + 1;
//	}
//
//	vector<int> queries(3);
//	for (size_t i = 0; i < queries.size(); i++) {
//		queries[i] = i;
//	}
//
//	vector<int> Result = CircularaRotation(a, 2, queries);
//
//	for (size_t i = 0; i < Result.size(); i++) {
//		cout << Result[i] << " ";
//	}
//
//	return 0;
//}
