#include <iostream>
#include "list.h"

using namespace std;

bool findNode(int n,List *head);
void listNode(List* head);
void removeNode(int n,List *head);

//---------------------------------main------------------------------------

int main(){

//For create a linked_List
    List* node1=new List(5);
    List *head=node1;
    for(int i=0; i<8; i++){
        List* node=new List(i*5);
        node1->setNextNode(node);
        node1=node;
    }
    cout<<"List created\n";
//For output all element for the List
    listNode(head);
    int n(0);
    cin>>n;
    if(findNode(n,head))
        cout << n <<" is found\n";
    else
        cout << n <<" is not found\n";
//For remove all occurence of an element user input
    int m(0);
    cin >>m;
    removeNode(m,head);
    listNode(head);
    
    return 0;
}


//------------------------------------Fonction------------------------------------

bool findNode(int n,List *head){

    while(head->getNextNode()!=NULL){
        if(head->getNode()==n)
            return true;
        else
            head=head->getNextNode();

    }
    return false;
}

void listNode(List* head)
{

    while (head)
    {
       cout <<head->getNode()<<" ";
       head=head->getNextNode();
    }
    cout<<"\n";
}

void removeNode(int n,List *head)
{
    List* previous=nullptr;
    int m(0);
    if (head->getNode() == n) 
    {
        *head = *head->getNextNode();
    }

    while (head)
    {
        if(head->getNode()==n)
        {
            previous->setNextNode(head->getNextNode());
        }
        previous=head;
        head=head->getNextNode();
    }

    cout<<n<<" is remove "<<m<<" fois \n";
}