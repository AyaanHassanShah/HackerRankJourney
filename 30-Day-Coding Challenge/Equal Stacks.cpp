//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3) {
//	int sum1 = accumulate(h1.begin(), h1.end(), 0);
//	int sum2 = accumulate(h2.begin(), h2.end(), 0);
//	int sum3 = accumulate(h3.begin(), h3.end(), 0);
//
//	int i = 0, j = 0, k = 0;
//
//	while (i < h1.size() && j < h2.size() && k < h3.size()) {
//		
//		if (sum1 == sum2 && sum2 == sum3) {
//			return sum1;
//		}
//
//		
//		if (sum1 >= sum2 && sum1 >= sum3) {
//			sum1 -= h1[i++];
//		}
//		else if (sum2 >= sum1 && sum2 >= sum3) {
//			sum2 -= h2[j++];
//		}
//		else {
//			sum3 -= h3[k++];
//		}
//	}
//
//	return 0; 
//}