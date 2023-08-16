class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int len=nums.size();
        stack<int>temp;
        vector<int>ans(len, -1);
          for(int i=2*len-1;i>=0;i--){
              //2 times cirular mai check karne kai liye
            int p=nums[i%len];
            //2 times so i%len
            while(!temp.empty() && temp.top()<=p){
                temp.pop();
            }

            if (i <len) {
                if (!temp.empty()) {
                    ans[i] = temp.top();
                }
            }
          temp.push(p);
      }
      return ans;
    }
};
