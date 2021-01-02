#include "TreeNode.h"

TreeNode::TreeNode():left{nullptr},right{nullptr}
{
    //ctor
}

TreeNode::~TreeNode()
{
    //dtor
}
TreeNode::TreeNode(double val){
    data=val;
}
double TreeNode::getValue()const{
    return data;
}
double TreeNode::setValue(double val){
    data=val;
}
void TreeNode::setLeft(double ){
}
void TreeNode::setRight(double){}
void TreeNode::setLeft(TreeNode* n){left=n;}
void TreeNode::setRight(TreeNode* n){right=n;}
TreeNode* TreeNode::getLeft()const{}
TreeNode* TreeNode::getRight()const{}
