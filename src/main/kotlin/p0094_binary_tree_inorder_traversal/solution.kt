package p0094_binary_tree_inorder_traversal

import p0112_path_sum.TreeNode
import java.util.LinkedList

class TreeNode(var `val`: Int) {
    var left: TreeNode? = null
    var right: TreeNode? = null
}

class Solution {
    fun inorderTraversal(root: TreeNode?): List<Int> {
        val result = LinkedList<Int>()
        fun dfs(root: TreeNode?){
            if (root == null) return
            dfs(root.left)
            result.addLast(root.`val`)
            dfs(root.right)
        }
        dfs(root)
        return result
    }
}