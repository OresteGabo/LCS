#include <iostream>
#include<cstdlib>
#include<ctime>
#include"List.h"
using namespace std;

int main()
{
    List* l=new List();
    l->inserer(12.2);
    l->display();
    cout<<"hello world";


    return 0;
}
