#include <stdio.h>
#include <stdlib.h>

//creating a  struct node.

struct structnode
    {
        // a node is made up of data and link to the next node.
        int data;
        struct structnode *next;
    };


void printList(struct structnode *head)
{
    if (head == NULL)
    {
        printf("the node is empty");
    }

    struct structnode *ptr = head;//initialize the pointer ptr to the node head

    while (ptr != NULL) {
         /** this code will print the data in the nodes
          * until the ptr is equal to NULL
          * which means the end of the nodes
          */
        printf(" %d ", ptr->data);
        ptr = ptr->next;//ptr point the the link of the next node till it's NULL
    }
    printf("\n");
}


int main()
{
    //we declare two node
    struct structnode *head = NULL;
    struct structnode *second = NULL;

    // we create memory space for the nodes
    head = malloc(sizeof(struct structnode));
    second = malloc(sizeof(struct structnode));

    head->data = 45;// assigns data to the first node
    head->next = second;//link first node to the second

    second->data = 46;
    second->next = NULL; //as second is the last node it will point to null

    printList(head);

    return 0;
//head->next
//next will contain the link to the next node called second
// head->next->next will contain NULL as it's the end of the node.



}