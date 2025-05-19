class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      for(int i=digits.size()-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
 // only increment the last digit of digits and return the after result ex- 1,2,3 will be 1,2,4
digits[i]=0; //if digits[i]=9, it will set 0

      }
digits.insert(digits.begin(),1);
// it will add 1 in the begining ex- 9 will be 0 then 1 will add before 0 so final digit will be 1,0
return digits;
}
    
};