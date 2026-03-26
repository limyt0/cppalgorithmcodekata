#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isCollect(string s)
{
    stack<char> st;
    bool result = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') { 
            st.push(s[i]); 
        }else if (!st.empty()) {
            if (s[i] == ')' && st.top() == '('
                || s[i] == '}' && st.top() == '{'
                || s[i] == ']' && st.top() == '[')
            {
                if (st.empty())
                {
                    result = false;
                    break;
                }
                st.pop();
            }
        }else
        {
            result = false;
            break;
        }
       
    }
    if (s.empty()) result = false;
    return result && st.empty();
}

int solution(string s) {
    int answer = 0;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (isCollect(s)) answer++;       
        s = s.substr(1) + s[0];
    }
    
    return answer;
}