////
////#include <iostream>
////#include <vector>
////
////using namespace std;
////int removeOverlapping(vector<vector<int>> intervals);
////
////int main()
////{
////
////}
////
////
////int removeOverlapping(vector<vector<int>> intervals)
////{
////	int Interval = 0;
////	bool Remove = false;
////	if (intervals.size() == 1)
////	{
////		return 0;
////	}
////
////	for (size_t i = 0; i < intervals.size(); i++)
////	{
////		for (size_t j = i + 1; j < intervals.size(); j++)
////		{
////			if (intervals[i][1] > intervals[j][0] && intervals[i][0] < intervals[j][1])
////			{
////				Interval++;
////				Remove = true;
////			}
////				
////		}
////	}
////	if (Remove)
////	{
////		Interval--;
////	}
////	return Interval--;
////
////}
////
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int removeOverlapping(vector<vector<int>>& intervals) {
//    if (intervals.size() <= 1) return 0;
//
//    // Sort intervals by start time
//    sort(intervals.begin(), intervals.end());
//
//    int removed = 0;
//    int lastEnd = intervals[0][1];
//
//    for (size_t i = 1; i < intervals.size(); i++) {
//        if (intervals[i][0] < lastEnd) {
//            // Overlapping: remove the interval with the larger end time
//            removed++;
//            lastEnd = min(lastEnd, intervals[i][1]);
//        }
//        else {
//            // No overlap: update lastEnd
//            lastEnd = intervals[i][1];
//        }
//    }
//
//    return removed;
//}
//
//int main() {
//    vector<vector<int>> intervals = { {1,2}, {2,3}, {3,4}, {1,3} };
//    cout << removeOverlapping(intervals) << endl; // Output: 1
//    return 0;
//}
//
