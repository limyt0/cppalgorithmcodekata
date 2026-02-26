#include <string>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> xnums = { 0,0,0,0,0,0,0,0,0,0,0 };
    vector<int> ynums = { 0,0,0,0,0,0,0,0,0,0,0 };
    for (int i = 0; i < X.size(); i++)
    {
        for(int j=0;j<=9;j++) if (X[i] == j+'0') xnums[j]++;        
    }
    for (int i = 0; i < Y.size(); i++)
    {
        for (int j = 0; j <= 9; j++) if (Y[i] == j + '0') ynums[j]++;
    }
    for (int i = 9; i >= 0; i--)
    {
        int tmp = xnums[i] < ynums[i] ? xnums[i] : ynums[i];
        for (int j = 0; j < tmp; j++) answer.push_back(i + '0');
    }
    if (answer.size() == 0)
    {
        answer = "-1";
    }
    else if (answer[0] == '0')
    {
        answer = "0";
    }

    return answer;
}