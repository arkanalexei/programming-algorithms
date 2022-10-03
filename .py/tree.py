## This is a python program which creates trees , performs insertion deletion and tree traversal
class Node:
    def __init__(self,data):
        self.left=None
        self.right=None
        self.data=data
    def Inorder(self,root):
        res=[]
        if root:
            res=self.Inorder(root.left)
            res.append(root.data)
            res=res+self.Inorder(root.right)
        return res 
    def PreOrderTraversal(self,root):
        res=[]
        if root:
            res.append(root.data)
            res=res+self.PreOrderTraversal(root.left)
            res=res+self.PreOrderTraversal(root.right)
        return res    
    def PostOrderTraversal(self,root):
        res=[]
        if root:
            res=self.PostOrderTraversal(root.left)
            res=res+self.PostOrderTraversal(root.right)
            res.append(root.data)
        return res    
    def insert(self,data):
        if self.data:
            if data<self.data:
                if self.left is None:
                    self.left=Node(data)
                else:
                    self.left.insert(data)
            elif data>self.data:
                if self.right is None:
                    self.right=Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data=data
    def minValue(node):
        current=node
        while(current is None):
            current=current.left
        return current    
    def deleteNode(self,root,value):
        if root is None:
            return root
        if value<root.data:
            root.left=self.deleteNode(root.left,value)
        elif value>root.data:
            root.right=self.deleteNode(root.right,value)
        else:
            if root.left is None:
                temp=root.right
                root=None
                return temp
            elif root.right is None:
                temp=root.left
                root=None
                return temp
            temp=self.minValue(root.right)
            root.data=temp.data
            root.right=self.deleteNode(root.right,temp.data)
        return root    
root=Node(10)
root.insert(9)
root.insert(8)
root.insert(12)
root.insert(11)
root=root.deleteNode(root,11)
print(root.Inorder(root))
        
        
