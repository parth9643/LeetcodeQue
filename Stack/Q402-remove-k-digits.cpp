class Solution {
public:
    string removeKdigits(string num, int k) {
        string temp="";
        for(char &s:num)
        {
            while(temp.size()>0 && temp.back()>s &&k)
            {
                temp.pop_back();
                k--;
            }
            if(temp.size()>0||s!='0')
            {
                temp.push_back(s);
            }
        }
        
         while(temp.size()>0 && k--)  
        {
            temp.pop_back();
        }
        
        
        if(temp.empty()){
            return "0";
        }
        
        else{
            return temp;
        }
    }
};
