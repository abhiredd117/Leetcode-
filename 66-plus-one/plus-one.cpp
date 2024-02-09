class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; --i) {
            if (++digits[i] %= 10)
                return digits;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
