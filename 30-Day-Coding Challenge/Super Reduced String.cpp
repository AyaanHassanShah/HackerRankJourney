//
//#include <iostream>
//#include<stack>
//#include <stack>
//using namespace std;
//string superReducedString(string s);
//
//
//int main() {
//	 string s = "aabbccddeeffgghh";
//	 string result = superReducedString(s);
//	 cout << "Result: " << result <<  endl;
//	return 0;
//}
//
//
//string superReducedString(string s)
//{
//	stack<char>St;
//	St.push(s[0]);
//	for (int i = 1; i < s.length(); i++)
//	{
//		if (!St.empty() && s[i] == St.top())
//		{
//			St.pop();
//			
//		}
//		else
//		{
//			St.push(s[i]);
//		}
//	}
//
//	stack<char> S;
//	while (!St.empty())
//	{
//		S.push(St.top());
//		St.pop();
//	}
//
//	string Str;
//	while (!S.empty())
//	{
//		Str += S.top();
//		S.pop();
//	}
//	if (Str.empty())
//	{
//		return "Empty String";
//	}
//	return Str;
//}