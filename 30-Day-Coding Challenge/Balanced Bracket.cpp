//
//#include <iostream>
//#include <stack>
//#include <string>
//using namespace std;
//string isBalanced(string s);
//bool MatchParenthesis(char B, char A);
//
//int main()
//{
//	string S = "{[(])}";
//
//	string Return = isBalanced(S);
//	cout << Return << " ";
//}
//
//
//bool MatchParenthesis(char B, char A)
//{
//	if (A == '(' && B == ')')
//	{
//		return 1;
//	}
//	else if (A == '{' && B == '}')
//	{
//		return 1;
//	}
//	else if (A == '[' && B == ']')
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//string isBalanced(string s)
//{
//	stack<char> St;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i] == '(' || s[i] == '{' || s[i] == '[')
//		{
//			St.push(s[i]);
//		}
//
//		else
//		{
//			if (!St.empty())
//			{
//				char Pop = St.top();
//				St.pop();
//				bool Flag = MatchParenthesis(s[i], Pop);
//
//				if (Flag == 1)
//				{
//					continue;
//				}
//				else
//				{
//					return "NO";
//				}
//			}
//			else
//			{
//				return "NO";
//			}
//		}
//
//	}
//
//	if (St.empty())
//	{
//		return "YES";
//	}
//	return "NO";
//}
//
//
