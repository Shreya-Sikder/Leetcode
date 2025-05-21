class Solution {
public:
    string removeDigit(string number, char digit) {
        //int num=stoi(number)
    for(int i=0;i<number.size();i++){
        if(number[i]==digit){
             if (i + 1 < number.size() && number[i + 1] > digit) {
                   string s= number.substr(0, i) + number.substr(i + 1);
            return s;}
    }

    }
        //last occurence 
      int last = number.rfind(digit);
       string s= number.substr(0, last) + number.substr(last + 1);
        return s;
    }
};