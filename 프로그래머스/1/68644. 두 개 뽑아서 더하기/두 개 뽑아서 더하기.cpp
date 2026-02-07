#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int size = numbers.size();
    bool isNum[201] = {false, };
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            int tmp = numbers[i] + numbers[j];
           
            isNum[tmp] = true;
            
        }
    }
    for (int i =0; i <= 200; i++)
    {
        if (isNum[i])
        {
            answer.push_back(i);
        }
    }
    return answer;
}