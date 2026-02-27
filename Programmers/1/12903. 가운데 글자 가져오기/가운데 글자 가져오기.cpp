#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size();
    int middle = size / 2;
    if (size % 2 == 0) {
        answer = s.substr(middle - 1, 2);
    }
    else {
        answer = s.substr(middle, 1);
    }
    return answer;
}