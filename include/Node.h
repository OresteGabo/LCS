#ifndef NODE_H
#define NODE_H
#include<ostream>
#include"List.h"
class List;
using std::ostream;
class Node
{
    public:
        Node();
        Node(double);
        virtual ~Node();

    protected:

    private:
        double data;
        Node* next;
        friend class List;
        friend ostream& operator<<(ostream& os,const List&);
};

#endif // NODE_H
