class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let obj = {};

        for(let i = 0; i < nums.length; i++){
            if(obj[target - nums[i]] === undefined) {
                obj[nums[i]] = i;
            } else {
                return [obj[target - nums[i]], i];
            }
        }
    }
}
