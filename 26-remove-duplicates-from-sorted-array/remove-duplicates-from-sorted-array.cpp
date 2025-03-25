class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=0;
      
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[x]){
            x+=1;
    nums[x]=nums[i]; 
       
 }

   }
   return x+1;
    }
};