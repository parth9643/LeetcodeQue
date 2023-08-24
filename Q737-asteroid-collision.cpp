class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>p;
        vector<int>ans;

        for(int i=0;i<asteroids.size();i++){

            while(!p.empty()&& p.top()>0 && asteroids[i]<0)
             {
                int temp=p.top()+asteroids[i];

                if(temp<0){
                    p.pop();
                }
                else if(temp>0){
                    asteroids[i]=0;
                }

                else{
                    p.pop();
                    asteroids[i]=0;
                }
            }
            if(asteroids[i]){
                p.push(asteroids[i]);
            }

        }

        while(!p.empty()){
            ans.push_back(p.top());
             p.pop();
        }

        // stack ko ulta bhi karna pade ga
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
