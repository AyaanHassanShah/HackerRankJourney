//
//#include <iostream>
//#include <vector>
//using namespace std;
//long arrayManipulation(int n, vector<vector<int>> queries)
//{
//    vector<long> Array(n + 2, 0); 
//
//
//    for (int i = 0; i < queries.size(); i++)
//    {
//        int a = queries[i][0];  
//        int b = queries[i][1];  
//        int k = queries[i][2];  
//
//        Array[a] += k;     
//        Array[b + 1] -= k; 
//    }
//
//    
//    long maxVal = 0, sum = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        sum += Array[i];  
//        maxVal = max(maxVal, sum);  
//    }
//
//    return maxVal;
//}
//
//int main() {
//    int n, m;
//    cin >> n >> m; 
//
//    vector<vector<int>> queries(m, vector<int>(3));
//
//    
//    for (int i = 0; i < m; i++) {
//        cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
//    }
//
//    cout << arrayManipulation(n, queries) << endl;
//    return 0;
//}