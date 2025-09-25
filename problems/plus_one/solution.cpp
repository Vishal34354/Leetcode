class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size() - 1;
        int carry = 1;  
        while (n >= 0 && carry) {
            digits[n] += carry;
            carry = digits[n] / 10;
            digits[n] %= 10;
            n--;
        }
        if (carry) {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};