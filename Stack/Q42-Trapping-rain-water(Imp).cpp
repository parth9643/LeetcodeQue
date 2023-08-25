class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int len= height.size();
        int right=len-1;
        int ans=0;

        int leftmax,rightmax=0;

        while(left<=right){
            if(height[left]<=height[right]){
                if(height[left]>=leftmax){
                    leftmax=height[left];
                }
                else{
                    ans+=leftmax-height[left];
                }

                left++;
            }

            else{
                 if(height[right]>=rightmax){
                    rightmax=height[right];
                }
                else{
                    ans+=rightmax-height[right];

                }
            right--;
            }   
        }
        return ans;
    }
};
