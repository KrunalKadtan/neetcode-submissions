class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {

        // let s1 = s.split('').sort().join('');
        // let t1 = t.split('').sort().join('');

        if (s.split('').sort().join('') === t.split('').sort().join('')) return true;

        return false;
    }
}
