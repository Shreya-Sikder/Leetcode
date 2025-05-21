class Solution {
public:
    int sum(int n){
   // vector<int>sumation;
    int rem=0;
  while(n>0)
      { 
     rem+=n%10;
     n=n/10;
      }
        return rem ;
    }
int smallestIndex(vector<int>& nums) {  
 for(int i=0;i<nums.size();i++){
       if (sum(nums[i])==i) return i; 
 }   
        return -1;
    }
};