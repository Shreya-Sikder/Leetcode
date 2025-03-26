class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>vec;
       vec.insert(vec.end(),nums1.begin(),nums1.end());
       vec.insert(vec.end(),nums2.begin(),nums2.end());
sort(vec.begin(),vec.end());
int n=vec.size();
int mid=n/2;
if(n%2!=0)
{
return vec[mid];
}
else{
 
return (vec[mid]+vec[mid-1])/2.0;
    }}
};