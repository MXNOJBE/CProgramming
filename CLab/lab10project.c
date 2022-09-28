#include <stdio.h>
#include <stdlib.h>

struct books
{
    char name[50];
    int quantity;
} bk[10];

void write()
{
    int i;
    FILE *fptr;
    fptr = fopen("BookStore.bin", "wb+");
    for (i = 0; i < 2; i++)
    {
        printf("\nEnter the book name: ");
        scanf("%s", &bk[i].name);
        printf("\nPlease enter the quantity of books: ");
        scanf("%d", &bk[i].quantity);
        fclose(fptr);
    }
}
void append()
{
    struct books b;
    int i;
    FILE *fptr;
    fptr = fopen("BookStore.bin", "a");

    printf("\nEnter the book name: ");
    scanf("%s", &b.name);
    printf("\nPlease enter the quantity of books: ");
    scanf("%d", &b.quantity);
    fclose(fptr);
}
void search()
{
    char word[10];
    int i;
    FILE *fptr;
    fptr = fopen("BookStore.bin", "wb+");
    printf("Enter the book isbn to be searched: ");
    scanf("%s", &word);
    for (i = 0; i < 2; i++)
    {
        if (bk[i].name == word)
        {
            printf("Present book is %s quantity is %d", bk[i].name, bk[i].quantity);
        }
    }
}
void read()
{
    int i;
    struct books b;
    FILE *fptr;
    fptr = fopen("Books.bin", "wb+");
    for (i = 0; i < 2; i++)
    {
        printf("\n\t%s\t%d", bk[i].name, bk[i].quantity);
    }
    fclose(fptr);
}
int main()
{
    int choice;
loop:
    printf("\nEnter the choice: ");
    printf("\nEnter 1 to enter the book details");
    printf("\nEnter 2 to add a book to inventory");
    printf("\nEnter 3 to search a book by its number: ");
    printf("\nWanna see the alphabetically ordered list?");
    printf("\nEnter 4 to delete a book record");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        write();
    }
    else if (choice == 2)
    {
        read();
    }
    else if (choice == 3)
    {
        search();
    }
    else if (choice == 4)
    {
        append();
    }
    goto loop;
}
