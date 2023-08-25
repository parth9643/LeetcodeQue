class Solution {
public:
    bool isTrue(string &temp) {
        stack<char> p;
        for (int i = 0; i < temp.size(); i++) {
            if (temp[i] == '(') {
                p.push('(');
            } else {
                if (!p.empty()) {
                    p.pop();
                } else {
                    return false;
                }
            }
        }
        return p.empty(); // Return true if the stack is empty, false otherwise
    }

    void temp1(int s1, int s2, string &temp, vector<string> &ans) {
    if (s1 == 0 && s2 == 0) {
        if (isTrue(temp)) {
            ans.push_back(temp);
        }
        return;
    }

    if (s1 != 0) {
        temp.push_back('(');
        temp1(s1 - 1, s2, temp, ans);
        temp.pop_back();
    }

    if (s2 != 0) {
        temp.push_back(')');
        temp1(s1, s2 - 1, temp, ans);
        temp.pop_back();
    }
}

    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int s1 = n;
        int s2 = n;
        string temp = "";

        temp1(s1, s2, temp, ans);

        return ans;
    }
};
