#include "list.h"

List::List(int val)
{
    node=val;
    nextNode=nullptr;
}
List::List()
{   
    nextNode=nullptr;
}

List::List(List *copy){
    node=0;
    copy->nextNode=nextNode;
}

List::~List()
{
}

int List::getNode(){
    return node;
}

List* List::getNextNode(){
    return nextNode;
}

void List::setNextNode(List* node){
    nextNode=node;
}