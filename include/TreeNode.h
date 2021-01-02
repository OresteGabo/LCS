#ifndef TREENODE_H
#define TREENODE_H


class TreeNode
{
    public:
        TreeNode();
        TreeNode(double);
        virtual ~TreeNode();
        double getValue()const;
        double setValue(double);
        void setLeft(double);
        void setRight(double);
        void setLeft(TreeNode*);
        void setRight(TreeNode*);
        TreeNode* getLeft()const;
        TreeNode* getRight()const;
        friend class Tree;
    protected:

    private:
        TreeNode* right;
        TreeNode* left;
        double data;
};

#endif // TREENODE_H
