/*
LeetCode
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int minValue = INT_MAX;

        if (nums.size() == 1)
            return nums[0];

        if (nums[0] < nums[nums.size()-1])
            return nums[0];



        while (start <= end){
            int mid = start + (end - start) / 2;
            if (nums[start] <= nums[mid]){
                minValue = min(minValue, nums[start]);
                start = mid + 1;
            }
            else {
                minValue = min(minValue, nums[mid]);
                end = mid - 1;
            }
        }
        return minValue;
    }
};
