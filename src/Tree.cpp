#include "Tree.h"

Tree::Tree():head{nullptr}
{
    //ctor
}

Tree::~Tree()
{
    TreeNode* cr=head;
    while(cr){
        if(cr->right){
            head=cr->right;
        }else if(cr->left){
            head=cr->left;
        }
        delete cr;
        cr=head;
    }
}
Tree::Tree(const Tree& t):head{nullptr}{
    TreeNode* cr=t.head;
}
double Tree::getTheSmallestValue()const{}
void Tree::add(double val){
    if(head==nullptr){
        head=new TreeNode(val);
        return;
    }
    TreeNode* cr=head,*prevC=nullptr;
    while(cr){
        if(val<cr->data){
            prevC=cr;
            cr=cr->right;
        }else if(val>cr->data){
            prevC=cr;
            cr=cr->right;
        }else{return;}
    }
    if(val<cr->data){
        prevC->setLeft(new TreeNode(val));
    }else{
        prevC->setRight(new TreeNode(val));
    }
}
void Tree::deleteNode(double){

}
bool Tree::operator==(const Tree&)const{}
Tree& Tree::operator=(const Tree&){}
