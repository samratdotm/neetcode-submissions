class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // will sort the array and check the adjacent numbers..
        sort(nums.begin(), nums.end()); // O(nlogn)

        for(int i = 1; i < (int) nums.size(); ++i) { // O(n)
            if(nums[i - 1] == nums[i])
                return true;
        }
        return false;
    }
};