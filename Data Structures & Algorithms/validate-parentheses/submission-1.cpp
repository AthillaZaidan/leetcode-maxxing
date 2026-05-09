#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int len = s.size();
        for (int i = 0; i < len; i++){
            char c = s[i];
            if (c == '(' || c == '[' || c == '{'){
                st.push(c);
            } else {
                if (st.empty()) return false;
                char top = st.top();
                if (c == ')' && top == '(' ||
                    c == ']' && top == '[' ||
                    c == '}' && top == '{' ) {
                        st.pop();
                    }
                else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};