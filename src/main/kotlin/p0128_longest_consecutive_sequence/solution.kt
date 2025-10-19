package p0128_longest_consecutive_sequence

class Solution {
    fun longestConsecutive(nums: IntArray): Int {
        if (nums.size < 2) return nums.size

        val set = HashSet<Int>()
        nums.forEach { set.add(it) }

        var result = 0
        nums.forEach {
            if (!set.contains(it - 1)){
                var c = 1
                while (set.contains(it + c)){ c ++ }
                if (c > result) result = c
            }
        }

        return result
    }
}