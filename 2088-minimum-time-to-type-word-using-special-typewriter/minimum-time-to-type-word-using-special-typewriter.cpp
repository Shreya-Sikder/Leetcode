class Solution {
public:
    int minTimeToType(string word) {
        int time=0;
         char current='a';
for(int i=0;i<word.length();i++)
{        char c = word[i];
     int clock=abs(c-current);
    int    anticlock=26-clock;
     int minsteps=  min(clock,anticlock);
     time+=1+minsteps;
     current =c;
}

         return time;
    }
};