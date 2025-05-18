class Solution {
public:
    string winningPlayer(int x, int y) {
        int c=0;
        while(x>=0 && y>=0){
            if(x>=1&&y>=4)
 c++;
 x-=1;
 y-=4;
        }
        if(c%2!=0)
        return "Alice";
        else
        return "Bob";
    }
};