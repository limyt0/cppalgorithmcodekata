#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> p1 = { 1,2,3,4,5 };
    int p1cnt = 0;
    vector<int> p2 = { 2 ,1 ,2 ,3, 2, 4, 2, 5 };
    int p2cnt = 0;
    vector<int> p3 = { 3,3,1,1,2,2,4,4,5,5 };
    int p3cnt = 0;
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == p1[i % 5])
        {
            p1cnt++;
        }
        if (answers[i] == p2[i % 8])
        {
            p2cnt++;
        }
        if (answers[i] == p3[i % 10])
        {
            p3cnt++;
        }
    }
    int max = 0;
    if (p1cnt >= max) max = p1cnt;
    if (p2cnt >= max) max = p2cnt;
    if (p3cnt >= max) max = p3cnt;
    if (max == p1cnt) answer.push_back(1);
    if (max == p2cnt) answer.push_back(2);
    if (max == p3cnt) answer.push_back(3);

    return answer;
}