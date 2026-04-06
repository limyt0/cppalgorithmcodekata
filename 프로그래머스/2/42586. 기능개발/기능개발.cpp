#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> arr;
    int prev = -1;
    for (int i = 0; i < progresses.size(); i++)
    {
        int tmp = (100 - progresses[i]) / speeds[i];
        if ((100 - progresses[i]) % speeds[i] != 0) tmp += 1;
        if (prev > tmp) tmp = prev;
        prev = tmp;
        arr.push_back(tmp);
    }
    prev = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (prev != arr[i])
        {
            answer.push_back(1);
            prev = arr[i];
        }
        else {
            answer.back()++;
        }
    }
    return answer;
}