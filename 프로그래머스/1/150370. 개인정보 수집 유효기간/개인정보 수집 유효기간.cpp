#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int arr[26];
    for (int i = 0; i < 26; i++) arr[i] = 0;
    for (int i = 0; i < terms.size(); i++)
    {
        int tmp = terms[i][0] - 'A';
        arr[tmp] = stoi(terms[i].substr(2));
    }
    for (int i = 0; i < privacies.size(); i++)
    {
        int tmp = privacies[i][11] - 'A';
        int addm = arr[tmp];
        int p_year = stoi(privacies[i].substr(0, 4));
        int p_month = stoi(privacies[i].substr(5, 2));
        int p_day = stoi(privacies[i].substr(8, 2));
        int hap_month = p_month + addm;

        p_year += (hap_month / 12);
        
        p_month = hap_month % 12;
        if (p_month == 0) 
        {
            p_month = 12;
            p_year -= 1;
        }

        int t_year = stoi(today.substr(0, 4));
        int t_month = stoi(today.substr(5, 2));
        int t_day = stoi(today.substr(8, 2));
        if (t_year > p_year) {
            answer.push_back(i + 1);
        }
        else if (t_year == p_year) {
            if (t_month > p_month)
            {
                answer.push_back(i + 1);
            }
            else if (t_month == p_month) {
                if (t_day >= p_day) {
                    answer.push_back(i + 1);
                }
            }
        }
    }

    return answer;
}