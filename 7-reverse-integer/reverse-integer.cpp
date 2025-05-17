class Solution {
public:
    int reverse(int x) {
        int res = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

         
            if (res > INT32_MAX / 10 || (res == INT32_MAX / 10 && digit > 7))
                return 0;
            if (res < INT32_MIN / 10 || (res == INT32_MIN / 10 && digit < -7))
                return 0;

            res = res * 10 + digit;
        }

        return res;
    }
};
