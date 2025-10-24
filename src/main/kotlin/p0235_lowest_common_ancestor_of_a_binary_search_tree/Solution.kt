package p0235_lowest_common_ancestor_of_a_binary_search_tree

import p0102_binary_tree_level_order_traversal.TreeNode


class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    fun lowestCommonAncestor(root: TreeNode?, p: TreeNode?, q: TreeNode?): TreeNode? {
        if (root == null) return null
        return when {
            maxOf(p!!.`val`, q!!.`val`) < root.`val` -> lowestCommonAncestor(root.left, p, q)
            minOf(p.`val`, q.`val`) > root.`val` -> lowestCommonAncestor(root.right, p, q)
            else -> root
        }
    }
}