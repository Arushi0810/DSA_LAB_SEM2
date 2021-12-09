#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} * snode;

void createlist(int n);                        // Function Prototype
void display(struct node *);                   // Function Prototype
struct node *LSearch(struct Node *p, int key); // Function Prototype
void insert(struct node *, int, int);
void deleteNode(struct node *, int);
void AscendingSort(struct node *);
void DescendingSort(struct node *);
struct node *CountAndDevide(struct node *);
int main()
{
    int n, x, index;
    cout << "Enter how many nodes you wants to create in the linked list:\n";
    cin >> n;
    createlist(n); // Function calling
    printf("The Created List is:-\n");
    display(snode); // Function calling
    cout << "\nEnter data after which element is to be inserted and element to be inserted\n";
    cin >> index >> x;
    insert(snode, x, index);
    display(snode);
    cout << "\nEnter element to be deleted:\n";
    cin >> x;
    deleteNode(snode, x);
    display(snode);
    struct node *l2 = CountAndDevide(snode);
    cout << endl
         << "First List:\n";
    display(snode);
    cout << endl
         << "Second List:\n";
    display(l2);
    AscendingSort(snode);
    cout << endl
         << "Sorted First List\n";
    display(snode);
    DescendingSort(l2);
    cout << endl
         << "Sorted Second List\n";
    display(l2);
}

void createlist(int n) // 7 16 9 4 72 18
{
    struct node *q, *t;
    int num, i;
    snode = new node;
    if (snode == NULL)
    {
        cout << "Memory cannot be allocated";
    }
    else
    {
        cout << "Give the input for 1st Node" << endl;
        cin >> num;
        snode->data = num;
        snode->next = NULL;
        t = snode;
        for (i = 2; i <= n; i++)
        {
            q = new node;
            if (q == NULL)
            {
                cout << "Memory cannot be allocated" << endl;
            }
            else
            {
                cout << "Give the input for node" << i << " : " << endl;
                cin >> num;
                q->data = num;
                q->next = NULL;
                t->next = q;
                t = t->next;
            }
        }
    }
}
void display(struct node *first)
{
    struct node *p = first;
    if (first == NULL)
    {
        cout << "The created linked list is empty" << endl;
    }
    else
    {
        p = first;
        while (p != NULL)
        {
            cout << p->data << " ->";
            p = p->next;
        }
    }
}
void insert(struct node *first, int x, int index)
{
    struct node *t = new node();
    t->data = x;
    t->next = NULL;
    struct node *p = first;
    while (p->next != NULL || p->data == index)
    {
        if (p->data == index)
        {
            t->next = p->next;
            p->next = t;
        }
        p = p->next;
    }
}
void deleteNode(struct node *snode, int element)
{
    struct node *p = snode;
    struct node *q = new node();
    q->next = NULL;
    while (p)
    {
        if (p->data == element)
        {
            q->next = p->next;
            p = NULL;
            free(p);
            return;
        }
        else
        {
            q = p;
            p = p->next;
        }
    }
}
struct node *CountAndDevide(struct node *first)
{
    int count = 0;
    struct node *p = first;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    int k;
    if (count % 2)
        k = (count / 2) + 1;
    else
        k = count / 2;
    p = snode;
    struct node *q = NULL;
    for (int i = 0; i < k; i++)
    {

        q = p;
        p = p->next;
    }
    q->next = NULL;
    return p;
}
void AscendingSort(struct node *first)
{
    struct node *p = first;
    struct node *q = NULL;
    struct node *r = first;
    while (r->next != NULL)
    {
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
            if (q->data > p->data)
            {
                int t = q->data;
                q->data = p->data;
                p->data = t;
            }
        }
        r = r->next;
    }
}
void DescendingSort(struct node *first)
{
    struct node *p = first;
    struct node *q = NULL;
    struct node *r = first;
    while (r->next != NULL)
    {
        while (p->next != NULL)
        {
            q = p;
            p = p->next;
            if (q->data < p->data)
            {
                int t = q->data;
                q->data = p->data;
                p->data = t;
            }
        }
        r = r->next;
    }
}
