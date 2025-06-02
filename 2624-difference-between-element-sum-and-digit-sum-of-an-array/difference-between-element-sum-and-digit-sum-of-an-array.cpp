class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0;
        int digitSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            elementSum += num;

            int current = num;
            while (current != 0) {
                digitSum += current % 10;
                current /= 10;
            }
        }

        return abs(elementSum - digitSum);
    }
};
