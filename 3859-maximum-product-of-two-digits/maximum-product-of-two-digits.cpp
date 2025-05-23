class Solution {
public:
    int maxProduct(int n) {
        vector<int> nums;
        while (n > 0) {
            nums.push_back(n % 10);
            n /= 10;
        }

        int maxProd = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int product = nums[i] * nums[j];
                maxProd = max(maxProd, product);
            }
        }

        return maxProd;
    }
};
