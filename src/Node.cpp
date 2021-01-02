#include "Node.h"

Node::Node():next{nullptr}
{
    //ctor
}

Node::~Node()
{
    next->next=nullptr;
    delete next;
}
Node::Node(double d):next{nullptr},data{d}
{}
