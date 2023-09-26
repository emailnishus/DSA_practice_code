#include <iostream>
using namespace std;


struct node
{
    int data;
    struct node * next;
};

void traversal(struct node * ptr){
    while(ptr != NULL){
        cout<<"\nElements are: "<<ptr->data;
        ptr = ptr->next;
    }
}

//insersion at the beginning of linked list
struct node * atbeginning(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    head = ptr;
    return ptr;
}

//insersion in between of linked list
struct node * inbetween(struct node * head, int data, int index){

    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;

    int i = 0;
    while(i != index-1){
        p = p -> next;
        i++; 
    }
    ptr->data = data;

    ptr->next = p->next;
    p->next = ptr;

    return head;

    
}

//insersion at the end of linked list
struct node * atend(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;

    ptr->data = data;

    while(p->next != NULL){
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

//insersion after a node in linked list
struct node * afternode(struct node * head ,struct node * prev_node, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    ptr->next = prev_node->next;
    prev_node->next = ptr;
    return head;
}





int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    struct node * fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head -> data = 7;
    head -> next = second;

    second-> data = 8;
    second -> next = third;

    third -> data = 9;
    third -> next = fourth;

    fourth -> data = 10;
    fourth-> next = fifth;

    fifth -> data = 11;
    fifth -> next = NULL;


    
    cout<<"Linked list before Insertion:\n";
    traversal(head);
    // atbeginning(head,22);

    // inbetween(head,99,3);

    // atend(head, 97);

    afternode(head, second, 33);
    cout<<"\nLinked list after Insertion:\n";
    traversal(head);

    


    return 0;
}