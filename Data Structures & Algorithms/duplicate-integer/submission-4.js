class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let n = new Set(nums)

        if(n.size === nums.length) return false;

        return true;
    }
}
