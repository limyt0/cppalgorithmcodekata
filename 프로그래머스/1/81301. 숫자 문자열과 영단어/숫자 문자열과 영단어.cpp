#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    string result = "";
    int i = 0;
    while (i <= s.length() - 1) {
        if (s.substr(i, 4) == "zero") { i += 4; result += "0"; }
        else if(s.substr(i, 3) == "one") { i += 3; result += "1"; }
        else if(s.substr(i, 3) == "two") { i += 3; result += "2"; }
        else if(s.substr(i, 5) == "three") { i += 5; result += "3"; }
        else if(s.substr(i, 4) == "four") { i += 4; result += "4"; }
        else if(s.substr(i, 4) == "five") { i += 4; result += "5"; }
        else if(s.substr(i, 3) == "six") { i += 3; result += "6"; }
        else if(s.substr(i, 5) == "seven") { i += 5; result += "7"; }
        else if(s.substr(i, 5) == "eight") { i += 5; result += "8"; }
        else if(s.substr(i, 4) == "nine") { i += 4; result += "9"; }
        else if(s.substr(i, 1) == "0") { i += 1; result += "0"; }
        else if(s.substr(i, 1) == "1") { i += 1; result += "1"; }
        else if(s.substr(i, 1) == "2") { i += 1; result += "2"; }
        else if(s.substr(i, 1) == "3") { i += 1; result += "3"; }
        else if(s.substr(i, 1) == "4") { i += 1; result += "4"; }
        else if(s.substr(i, 1) == "5") { i += 1; result += "5"; }
        else if(s.substr(i, 1) == "6") { i += 1; result += "6"; }
        else if(s.substr(i, 1) == "7") { i += 1; result += "7"; }
        else if(s.substr(i, 1) == "8") { i += 1; result += "8"; }
        else if(s.substr(i, 1) == "9") { i += 1; result += "9"; }
    }
    answer = stoi(result);
    return answer;
}