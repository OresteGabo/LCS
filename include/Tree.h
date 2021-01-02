#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"

class Tree
{
    public:
        Tree();
        Tree(const Tree&);
        double getTheSmallestValue()const;
        void add(double);
        void deleteNode(double);
        bool operator==(const Tree&)const;
        Tree& operator=(const Tree&);
        virtual ~Tree();
        bool search()const;


    protected:

    private:
        TreeNode* head;
};

#endif // TREE_H
