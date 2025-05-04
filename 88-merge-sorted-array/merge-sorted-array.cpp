class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     
 vector<int>nums;
 for(int i=0;i<m;i++)
 {  int val=nums1[i];
    nums.push_back(val);
 }
 for(int i=0;i<n;i++){
    int val=nums2[i];
    nums.push_back(val);
 }
 sort(nums.begin(),nums.end());
 for(int i=0;i<nums.size();i++){
    nums1[i]=nums[i];
 }
    }
};