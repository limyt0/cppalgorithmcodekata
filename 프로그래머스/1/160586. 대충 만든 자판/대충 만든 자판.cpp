#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int arr[26];
    for (int i = 0; i < 26; i++) arr[i] = 101;
    for (string keys : keymap)
    {
        for (int i = 0; i < keys.size(); i++)
        {
            int tmp = keys[i] - 'A';
            
            if (arr[tmp] > i) arr[tmp] = i+1;
        }
    }

    for (string target : targets)
    {
        int count = 0;
        for (int i = 0; i < target.size(); i++)
        {
            int tmp = target[i] - 'A';
            if (arr[tmp] != 101) 
            {
                count += arr[tmp];
            }
            else
            {
                count = -1;
                break;
            }
        }
        answer.push_back(count);
    }


    return answer;
}