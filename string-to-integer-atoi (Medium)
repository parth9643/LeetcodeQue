//Here is my solution in C++ hope you all likes it 

class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long ans = 0;
        int sign = 1;
        int i = 0;

        while (i < n && isspace(s[i])) {
            i++;
        }
        
        if (i < n && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        
        //digits to integer
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            //overflow checking
            if (ans > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            ans = ans * 10 + digit;
            i++;
        }
        
        //sign dal do aur fir overflow check karo
        ans *= sign;
        if (ans > INT_MAX) {
            return INT_MAX;
        } else if (ans < INT_MIN) {
            return INT_MIN;
        }
        
        return static_cast<int>(ans);
    }
};
