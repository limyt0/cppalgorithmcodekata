#include <string>
#include <vector>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int arr[4] = { 0,0,0,0 };
    for (int i = 0; i < survey.size(); i++)
    {
        if (survey[i] == "RT") arr[0] += (choices[i] - 4);
        else if (survey[i] == "TR") arr[0] += (4 - choices[i]);
        else if (survey[i] == "CF") arr[1] += (choices[i] - 4);
        else if (survey[i] == "FC") arr[1] += (4 - choices[i]);
        else if (survey[i] == "JM") arr[2] += (choices[i] - 4);
        else if (survey[i] == "MJ") arr[2] += (4 - choices[i]);
        else if (survey[i] == "AN") arr[3] += (choices[i] - 4);
        else if (survey[i] == "NA") arr[3] += (4 - choices[i]);
    }
    if (arr[0] <= 0) answer.push_back('R');
    else answer.push_back('T');
    if (arr[1] <= 0) answer.push_back('C');
    else answer.push_back('F');
    if (arr[2] <= 0) answer.push_back('J');
    else answer.push_back('M');
    if (arr[3] <= 0) answer.push_back('A');
    else answer.push_back('N');


    return answer;
}