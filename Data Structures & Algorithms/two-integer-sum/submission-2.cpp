class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pairs;

        for (int i = 0; i < nums.size(); i++) {

            int needed = target - nums[i];

            if (pairs.find(needed) !=pairs.end()) {
                return {pairs[needed], i};
            }

            pairs[nums[i]] = i;
        }

        return {};
    }
};