#include <iostream>
using namespace std;


struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void print(struct Node * head){
    struct Node *ptr = head;
   
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    

}


int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->prev = NULL;
    head->next = second;

    second->data = 2;
    second->prev = head;
    second->next = third;

    third->data = 3;
    third->prev = second;
    third->next = NULL;

    cout<<"The doubly Linked List is as follows :"<<endl;

    print(head);
    


    return 0;
}