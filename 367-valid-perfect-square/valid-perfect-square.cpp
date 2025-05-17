class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0,h=num;
        while(l<=h){
int mid=l+(h-l)/2;
  long long square = (long long)mid * mid;
if(square==num) return true;

if(square<num){
    l=mid+1;
   
}
else{
  h=mid-1;
}


        }
        return false;
    }
};