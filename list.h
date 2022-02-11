#ifndef LIST_H
#define LIST_H

class List
{
private:
    /* data */
    int node;
    List* nextNode;
public:
    List(int val);
    List();
    List(List *copy);
    ~List();
    int getNode();
    List* getNextNode();
    void setNextNode(List* node);
};

#endif  //LIST_H