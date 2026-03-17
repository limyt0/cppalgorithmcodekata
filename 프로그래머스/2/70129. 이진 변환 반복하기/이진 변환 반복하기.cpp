#include <string>
#include <vector>
#include <algorithm>

using namespace std;
string tobinarystring(int len)
{
    string result = "";
    while (len >= 2)
    {
        if (len % 2 == 1) result += "1";
        else result += "0";
        len /= 2;
    }
    if (len == 1) result += "1";
    reverse(result.begin(), result.end());
    
   if (result == "") result = "1";
    return result;
}
vector<int> solution(string s) {
    vector<int> answer;
    int cnt_del = 0;
    int cnt_ch = 0;
    
    string str = s;
    while (str != "1") 
    {
        int len = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '0') cnt_del++;
            else if(str[i] == '1') len++;

        }
        cnt_ch++;
        str = tobinarystring(len);
    }
    
    answer.push_back(cnt_ch);
    answer.push_back(cnt_del);
    return answer;
}