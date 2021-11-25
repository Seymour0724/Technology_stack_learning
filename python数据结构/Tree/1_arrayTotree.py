"""
用有序数组构造二叉树
"""

class TreeNode:
    def __init__(self,data):
        self.val = data
        self.lchild = None
        self.rchild = None

class BinaryTree:
    def __init__(self):
        self.lchild = None
        self.rchild = None
    def arrTotree(self,li):
        if len(li) == 0: return None
        if len(li) == 1: return TreeNode(li[0])
        left = 0
        right = len(li)-1
        mid = (left+right)//2+1
        root = TreeNode(li[mid])
        pointer = root
        def valTochild(pointer,left,right):
            if left < right:
                mid = (left+right)//2+1
                pointer = TreeNode(li[mid])
                pointer.lchild = valTochild(left,mid-1)
                pointer.rchild = valTochild(mid+1,right)

if __name__ == "__main__":
    li = [1,2,3,4,5,6,7,8,9,10]
    tree = BinaryTree()
    tree.arrTotree(li)