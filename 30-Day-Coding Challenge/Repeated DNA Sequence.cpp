
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> find_repeated_sequences(string s) {
    unordered_map<string, int> sequenceCount;
    vector<string> result;
    int n = s.length();

    if (n < 10) return result;

    for (int i = 0; i <= n - 10; i++) {
        string substring = s.substr(i, 10);
        sequenceCount[substring]++;

        if (sequenceCount[substring] == 2)

        {
            result.push_back(substring);
        }
    }

    return result;
}