class Solution {
public:
    void temp(vector<int>& nums,int j,vector<vector<int>>&ans,
            vector<int>&ans1)
        {
            ans.push_back(ans1);
            for(int k=j;k<nums.size();k++){
                //repeat vale kai liye
                if (k != j && nums[k] == nums[k - 1]){
                    continue;
                };
                ans1.push_back(nums[k]);
                temp(nums,k+1,ans,ans1);
                ans1.pop_back();
            }
        }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ans1;
        sort(nums.begin(), nums.end());
        temp(nums,0,ans,ans1);
        return ans;
    }
};
