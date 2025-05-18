class Solution {
public:
    bool canWinNim(int n) {
        
        if (n % 4 == 0)
            return false;
        else
            return true;
    }
};
/* optimal case
Case 1: Person 1 takes 1 → n = 7
Person 2 takes 3 → n = 4
Person 1 takes 1 → n = 3
Person 2 takes 3 → Person 2 wins

Case 2: Person 1 takes 2 → n = 6
Person 2 takes 2 → n = 4
Person 1 takes 1 → n = 3
Person 2 takes 3 → Person 2 wins

Case 3: Person 1 takes 3 → n = 5
Person 2 takes 1 → n = 4
Person 1 takes 1 → n = 3
Person 2 takes 3 → Person 2 wins*/
