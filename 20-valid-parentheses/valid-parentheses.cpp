class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else{
                if (st.empty()) return false;  // no opening for this closing
                char top = st.top();
                st.pop();
                if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[')) {
                return false;
                }
            }
        }
        return st.empty();
    }
};