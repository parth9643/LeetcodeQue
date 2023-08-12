class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()== 0) return ans;
        if(digits.size()== 1){
            if(digits[0]=='2') return {"a","b","c"};
            else if(digits[0]=='3') return {"d","e","f"};
            else if(digits[0]=='4') return {"g","h","i"};
            else if(digits[0]=='5') return {"j","k","l"};
            else if(digits[0]=='6') return {"m","n","o"};
            else if(digits[0]=='7') return {"p","q","r","s"};
            else if(digits[0]=='8') return {"t","u","v"};
            else if(digits[0]=='9') return {"w","x","y","z"};
        }

        
            vector <string> h1=letterCombinations(digits.substr(0,1));
            vector <string> h2=letterCombinations(digits.substr(1,digits.size()));
            
        
        
        
        for(auto i=0;i<h1.size();i++){
            for (auto j=0;j<h2.size();j++){
                ans.push_back(h1[i]+ h2[j]);
            }
        }
               return ans;              
        }
           
        
    };
