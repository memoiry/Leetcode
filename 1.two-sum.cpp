/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (44.29%)
 * Total Accepted:    1.9M
 * Total Submissions: 4.3M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> target_map;
        std::vector<int> results;
        for (int i = 0; i < nums.size(); ++i) {
            if (target_map.find(nums[i]) == target_map.end()) {
                target_map[target - nums[i]] = i;
            } else {    
                results.push_back(target_map[nums[i]]);
                results.push_back(i);
            }
        }
        return results;
    }
};
