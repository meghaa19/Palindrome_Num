class Solution {
public:
   /* bool isPalindrome(int x) {
        
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
        }*/
        int reverse=0;
        int rem=0;
        int original=x;
        while(x!=0)
        {
            rem=x%10;
            reverse=reverse*10+rem;
            x=x/10;
        }
        if(reverse==original)
        {
            return true;
        }
        else 
        {
            return false;
        }
    } 
    
    
        
        
        
    }
};
