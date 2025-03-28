class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string rev=string(s.rbegin(),s.rend());
        return s==rev;
    }
};