class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s=to_string(num);
        
             std::reverse(s.begin(), s.end());
       if (num != 0 && num % 10 == 0) {
            return false;
        }
        return true;
    }
};