#include <stdio.h>
#include <stdlib.h>

typedef struct Slist
{
    int data;
    struct Slist *next;
} NODE;

NODE *START = NULL;

NODE *getNode()
{
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    return newnode;
}

void CreateList(int n)
{
    int i = 0;
    NODE *nn, *ptr;
    while (i < n)
    {
        nn = getNode();
        if (START == NULL)
        {
            START = nn;
            ptr = nn;
        }
        else
        {
            ptr->next = nn;
            ptr = ptr->next;
        }
        i++;
    }
}

void DisplayList()
{
    NODE *ptr = START;
    printf("\nLinked List: ");
    if (ptr == NULL) {
        printf("Empty List\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void Search()
{
    NODE *ptr = START;
    int key, i = 0, flag = 0;
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            flag = 1;
            printf("Element found at %d position \n", i + 1);
            break;
        }
        i++;
        ptr = ptr->next;
    }
    if (flag == 0)
    {
        printf("\nElement Not Found\n");
    }
}

int getTotalNodes()
{
    NODE *ptr = START;
    int cnt = 0;
    while (ptr != NULL)
    {
        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

void insertAT(int pos)
{
    NODE *newnode, *ptr;
    ptr = START;
    int cnt = 1;

    int total = getTotalNodes();
    if (pos < 1 || pos > total + 1) {
        printf("\nInvalid Position!\n");
        return;
    }

    newnode = getNode();
    if (pos == 1)
    {
        newnode->next = START;
        START = newnode;
    }
    else if (pos == total + 1)
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
    else
    {
        while (cnt < pos - 1)
        {
            ptr = ptr->next;
            cnt++;
        }
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
    printf("\nNode inserted successfully.\n");
}

void deleteAT(int pos)
{
    NODE *ptr, *ptr1;
    int cnt = 1;

    int total = getTotalNodes();
    if (START == NULL) {
        printf("\nList is empty! Cannot delete.\n");
        return;
    }
    if (pos < 1 || pos > total) {
        printf("\nInvalid Position!\n");
        return;
    }

    if (pos == 1)
    {
        ptr = START;
        START = START->next;
        free(ptr);
    }
    else if (pos == total)
    {
        ptr1 = ptr = START;
        while (ptr->next != NULL)
        {
            ptr1 = ptr;
            ptr = ptr->next;
        }
        ptr1->next = NULL;
        free(ptr);
    }
    else
    {
        ptr1 = ptr = START;
        while (cnt < pos)
        {
            ptr1 = ptr;
            ptr = ptr->next;
            cnt++;
        }
        ptr1->next = ptr->next;
        free(ptr);
    }
    printf("\nNode deleted successfully.\n");
}

int main()
{
    int choice, pos, n;

    while (1) // Infinite loop for menu
    {
        printf("1. Create Initial List\n");
        printf("2. Display List\n");
        printf("3. Insert Node at Position\n");
        printf("4. Delete Node at Position\n");
        printf("5. Search Element\n");
        printf("6. Get Total Node Count\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter how many nodes you want to create: ");
            scanf("%d", &n);
            CreateList(n);
            DisplayList();
            break;

        case 2:
            DisplayList();
            break;

        case 3:
            printf("\nEnter position to insert: ");
            scanf("%d", &pos);
            insertAT(pos);
            DisplayList();
            break;

        case 4:
            printf("\nEnter position to delete: ");
            scanf("%d", &pos);
            deleteAT(pos);
            DisplayList();
            break;

        case 5:
            Search();
            break;

        case 6:
            printf("\nTotal nodes in the list: %d\n", getTotalNodes());
            break;

        case 7:
            printf("\nExiting program...\n");
            exit(0);

        default:
            printf("\nInvalid Choice\n");
        }
    }

    return 0;
}
