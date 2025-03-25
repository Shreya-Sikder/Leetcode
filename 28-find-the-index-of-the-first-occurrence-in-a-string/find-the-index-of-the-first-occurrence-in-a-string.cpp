class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle) != string::npos)
         {int res=haystack.find(needle) ;
         return res;}
        else
            return -1; // If needle is not found, return -1
    }
};
