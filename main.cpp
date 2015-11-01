class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0) return 0;
        int ptr = s.length() - 1;
        int count = 0;
        bool flag = false;
        while (ptr >= 0){
            if(s[ptr] != ' '){
                flag = true;
                count ++;
            }else{
                if(flag) return count;
            }
            ptr --;
        }
        return count;
    }
};
