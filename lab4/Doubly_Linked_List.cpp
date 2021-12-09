#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <bits/stdc++.h>
// 42 97 81 2 17 66
struct node
{
    struct node *lp;
    int data;
    struct node *rp;
} * snode;

void createDLL(int n);
void display();
void deletex(int x);
// void Adisplay();
void insert(int x, int y);
int main()
{

    int n, x, y;
    printf("How many nodes you want to insert in DLL:- ");
    scanf("%d", &n);
    createDLL(n);
    printf("The Created Doubly linked list is:-\n");
    display();
    printf("\nEnter value that you want to delete:- ");
    scanf("%d", &x);
    deletex(x);
    display();
    printf("\nEnter value that you want to insert and before which you want to insert:- ");
    scanf("%d%d", &x, &y);
    insert(x, y);
    display();
    getch();
    //	Adisplay();
    return 0;
}

void createDLL(int n)
{
    struct node *q, *t;
    int num, i;
    snode = (struct node *)malloc(sizeof(struct node));
    if (snode == NULL)
    {
        printf("Memory cannot be allocated");
    }
    else
    {
        printf("Give value for 1st node:- ");
        scanf("%d", &num);
        snode->data = num;
        snode->lp = NULL;
        snode->rp = NULL;
        t = snode;

        for (i = 2; i <= n; i++)
        {
            q = (struct node *)malloc(sizeof(struct node));
            if (q == NULL)
            {
                printf("Memory cannot be allocated");
                break;
            }
            else
            {
                printf("Give value for %d node:-", i);
                scanf("%d", &num);
                q->data = num;
                q->lp = NULL;
                q->rp = NULL;

                q->lp = t;
                q->lp->rp = q;
                t = t->rp;
            }
        }
    }
}

void display()
{
    struct node *p;
    if (snode == NULL)
    {
        printf("The created Doubly Linked List is Empty");
    }
    else
    {
        p = snode;
        while (p != NULL)
        {
            printf(" <--> %d", p->data);
            p = p->rp;
        }
    }
}
void deletex(int x)
{
    struct node *p = snode;
    while (p->data != x && p->rp != NULL)
    {
        p = p->rp;
    }
    if (p->rp == NULL)
        printf("Element not found in the given linked list");
    else
    {
        p->lp->rp = p->rp;
        p->rp->lp = p->lp;
        p = NULL;
        free(p);
    }
}
void insert(int x, int y)
{
    struct node *p = snode;
    struct node *t = new node();
    t->data = x;
    t->lp = NULL;
    t->rp = NULL;
    while (p->rp != NULL && p->data != y)
    {
        p = p->rp;
    }
    if (p == NULL)
    {
        printf("Element is not preset in the doubly linked list");
    }
    else
    {
        p->lp->rp = t;
        t->lp = p->lp;
        p->lp = t;
        t->rp = p;
    }
}