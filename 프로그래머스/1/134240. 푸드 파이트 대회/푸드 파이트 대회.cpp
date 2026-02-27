#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";
    for (int i = food.size() - 1; i >= 0; i--)
    {
        int tmp = food[i] / 2;
        string tmpstr = "";
        for (int j = 0; j < tmp; j++)
        {
            char idx = i + '0';
            tmpstr += idx;
        }
        answer = tmpstr + answer + tmpstr;
    }
    return answer;
}