#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    int answer = 0;
    vector<int> weight = { 781, 156, 31, 6, 1 };
    for (int i = 0; i < word.size(); i++)
    {
        switch (word[i])
        { 
        case 'A': answer += (0 * weight[i])+1; break;
        case 'E': answer += (1 * weight[i])+1; break;
        case 'I': answer += (2 * weight[i])+1; break;
        case 'O': answer += (3 * weight[i])+1; break;
        case 'U': answer += (4 * weight[i])+1; break;
        }
    }
    return answer;
}
