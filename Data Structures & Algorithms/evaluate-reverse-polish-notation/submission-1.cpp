class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (int i = 0; i < tokens.size(); i++) {
            string cur = tokens[i];

            if (cur != "+" && cur != "-" && cur != "*" && cur != "/") {
                st.push(stoi(cur));
            } else {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();

                if (cur == "+") {
                    st.push(a + b);
                } else if (cur == "*") {
                    st.push(a * b);
                } else if (cur == "-") {
                    st.push(a - b);
                } else {
                    st.push(a / b);
                }
            }
        }

        return st.top();
    }
};