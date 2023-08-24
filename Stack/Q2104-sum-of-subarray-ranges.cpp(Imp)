class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        std::stack<int> st;
        int len = nums.size();
        std::vector<int> leftmin(len - 1), rightmin(len - 1), leftmax(len, len), rightmax(len, len);
        long long sum = 0;

        // Calculate leftmin and rightmin
        for (int i = 0; i < len; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                leftmin[i] = i+1;
            }
            else{
                leftmin[i] = i-st.top();
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }

        for (int i = 0; i < len; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                rightmin[i] = st.top();
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }

        // Calculate leftmax and rightmax
        for (int i = len - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] => nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                leftmax[i] = st.top();
            }
            st.push(i);
        }

        for (int i = len - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                rightmax[i] = st.top();
            }
            st.push(i);
        }

        // Calculate the sum
        for (int i = 0; i < len; i++) {
            long long leftMin = i - leftmin[i] + 1, rightMin = rightmin[i] - i + 1;
            long long leftMax = i - leftmax[i] + 1, rightMax = rightmax[i] - i + 1;
            sum += (leftMax * rightMax - leftMin * rightMin) * nums[i];
        }
        return sum;
    }
};
