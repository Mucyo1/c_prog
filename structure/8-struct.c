#include <stdio.h>
#include <stdlib.h>

//creating a  struct node.

struct structnode
    {
        // a node is made up of data and link to the next node.
        int data;
        struct structnode *next;
    };

void count_of_nodes(struct structnode *head)
{
    int count = 0;

    if (head == NULL)
    {
        printf("the node is empty");
    }

    struct structnode *ptr = head;

    while (ptr != NULL)
    {
        count++;//this line will add the number of times the code encounters a node.
        ptr = ptr->next;//ptr point the the link of the next node till it's NULL
    }
    printf("the number of nodes is: %d\n", count);
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

    count_of_nodes(head);

    return 0;
//head->next
//next will contain the link to the next node called second
// head->next->next will contain NULL as it's the end of the node.



}