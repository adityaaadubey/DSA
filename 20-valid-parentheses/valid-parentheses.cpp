class Solution {
public:
    bool isValid(string ss) {
        stack<char> s;
        for(int i = 0; i < ss.length(); i++) {
        if(ss[i] == '{' || ss[i] == '[' || ss[i] == '(') {
            s.push(ss[i]);
        }
        else if(ss[i] == '}' || ss[i] == ']' || ss[i] == ')') {
            if(s.empty()) {
                return false;
            }
            if(ss[i] == '}' && s.top()=='{' || ss[i] == ']' && s.top()=='[' || ss[i] == ')' && s.top()=='('){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
    }
};