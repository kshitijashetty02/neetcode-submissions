class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> st; // acts as a stack
        for (int i = 0; i < tokens.size(); i++) {
            string& t = tokens[i];
            if (t=="+" || t=="-" || t=="/" || t=="*") {
                int c = st.back(); st.pop_back();
                int a = st.back(); st.pop_back();
                int res = 0;
                if (t=="+") res = a + c;
                else if (t=="-") res = a - c;
                else if (t=="/") res = a / c;
                else if (t=="*") res = a * c;
                st.push_back(res);
            } else {
                st.push_back(stoi(t));
            }
        }
        return st.back();
    }
};