//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int connectedCell(vector<vector<int>> matrix);
//
//
//int main()
//{
//
//}
//
//int Dfs(vector<vector<int>>& matrix, vector<vector<bool>>&visited, int i, int j, int Rows, int column, int C)
//{
//	visited[i][j] = 1;
//	C++;
//
//	if (j + 1 < column && matrix[i][j + 1] == 1 && visited[i][j + 1] == 0)
//	{
//		C = Dfs(matrix, visited, i, j + 1, Rows, column, C);
//	}
//
//	if (i + 1 < Rows && matrix[i + 1][j] == 1 && visited[i + 1][j] == 0)
//	{
//		C = Dfs(matrix, visited, i + 1, j, Rows, column, C);
//	}
//
//	if (j - 1 >= 0 && matrix[i][j - 1] == 1 && visited[i][j - 1] == 0)
//	{
//		C = Dfs(matrix, visited, i, j - 1, Rows, column, C);
//	}
//
//	if (i - 1 >= 0 && matrix[i - 1][j] == 1 && visited[i - 1][j] == 0)
//	{
//		C = Dfs(matrix, visited, i -1, j, Rows, column, C);
//	}
//
//	if (i + 1 < Rows && j - 1 >= 0 && matrix[i + 1][j - 1] == 1 && visited[i + 1][j - 1] == 0)
//	{
//		C = Dfs(matrix, visited, i + 1, j - 1, Rows, column, C);
//	}
//
//	if (i - 1 >= 0 && j - 1 >= 0 && matrix[i - 1][j - 1] == 1 && visited[i - 1][j - 1] == 0)
//	{
//		C = Dfs(matrix, visited, i - 1, j - 1, Rows, column, C);
//	}
//
//	if (i + 1 < Rows && j + 1 < column && matrix[i + 1][j + 1] == 1 && visited[i + 1][j + 1] == 0)
//	{
//		C = Dfs(matrix, visited, i + 1, j + 1, Rows, column, C);
//	}
//
//	if (i - 1 >= 0 && j + 1 < column && matrix[i - 1][j + 1] == 1 && visited[i - 1][j + 1] == 0)
//	{
//		C = Dfs(matrix, visited, i - 1, j + 1, Rows, column, C);
//	}
//	return C;
//}
//int connectedCell(vector<vector<int>> matrix)
//{
//	int Rows = matrix.size();
//	int columns = matrix[0].size();
//	vector<vector<bool>>visited(Rows, vector<bool>(columns, 0));
//	vector<int>Max;
//
//	for (int i = 0; i < Rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			if (matrix[i][j] == 1)
//			{
//				if (visited[i][j] == 0)
//				{
//					int C = 0;
//					C = Dfs(matrix, visited, i, j, Rows, columns, C);
//					Max.push_back(C);
//				}
//			}
//		}
//	}
//
//	int max = Max[0];
//	if (Max.size() == 0)
//	{
//		return 0;
//	}
//	for (size_t i = 1; i < Max.size(); i++)
//	{
//		if (Max[i] > max)
//		{
//			max = Max[i];
//		}
//	}
//
//	return max;
//
//}