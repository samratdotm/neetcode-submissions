class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> hmp;

        for(int x: nums)
            hmp[x] = false;

        int maxi = 0;
        for(int i = 0; i < (int) nums.size(); ++i) {
            if(hmp[nums[i]] == false) {
                int ele = nums[i];
                while(hmp.find(ele) != hmp.end()) {
                    hmp[ele] = true;
                    ele += 1;
                }
                maxi = max(maxi, (ele - nums[i]));
            }
        }
        return maxi;
    }
};
