class Solution {
public:
    bool isPalindrome(int x) {
        
        string str_num=to_string(x);
        string str_num_rev=str_num;
        reverse(str_num_rev.begin(),str_num_rev.end());
        if(str_num==str_num_rev)
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
        
        
    }
};
