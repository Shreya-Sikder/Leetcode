class Solution {
public:
    int hammingWeight(int n) {
      vector<int> binary;

    // Handle the case when n is 0
    if (n == 0) 
      return 0;
    
    // Convert decimal to binary
    while (n > 0) {
        binary.push_back(n % 2);
        n = n / 2;
    }

    // Print the binary number in reverse order (from most significant to least significant bit)
    int count=0;
    for (int i = binary.size() - 1; i >= 0; i--) {
  if(binary[i]==1){
    count++;
  }
    } 
    return count;
    }
};