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

//deleting first element in linked list

struct node * deletefirst(struct node * head){
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}





//deleting a node in between at a given index in linked list

struct node * deleteinbetween(struct node * head, int index){
    struct node * p = head;
    struct node * q = head ->next;

    for (int i = 1; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return(head);

}



//deleting last element in linked list
struct node * deletelast(struct node * head){
    struct node * p = head;
    struct node * q = head ->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return(head);

}



//deleting the element with a given value in linked list

struct node * deleteatvalue(struct node * head, int value){
    struct node * p = head;
    struct node * q = head ->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data == value){
        p->next = q->next;
        free(q);
    }

    return(head);

}






int main()
{
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    

    head -> data = 4;
    head -> next = second;

    second-> data = 3;
    second -> next = third;

    third -> data = 8;
    third -> next = fourth;

    fourth -> data = 1;
    fourth-> next = NULL;

   


    
    cout<<"Linked list before Insertion:\n";
    traversal(head);

    // head = deletefirst(head);
    // // head = deletefirst(head);

    // head = deleteinbetween(head,3);

    // head = deletelast(head);

    head = deleteatvalue(head,8);
    
    cout<<"\nLinked list after Insertion:\n";
    traversal(head);
    
    return 0;
}