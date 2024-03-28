string isBalanced(string s) {
    vector<char> stack;
    
    for (char bracket : s) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            stack.push_back(bracket);
        } else {
            if (stack.empty()) {
                return "NO";
            } else if ((bracket == ')' && stack.back() == '(') ||
                       (bracket == ']' && stack.back() == '[') || 
                       (bracket == '}' && stack.back() == '{')) {
                stack.pop_back();
            } else {
                return "NO";
            }
        }
    }
    
    return stack.empty() ? "YES" : "NO";
}