#include <stdio.h>
#include <stdlib.h>
int n;
struct books
{
    int rating;
    int isbn;
    char name[50];

} bk[10];

void write()
{
    int i;
    FILE *fptr;
    fptr = fopen("Books.bin", "wb+");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the book name: ");
        scanf("%s", &bk[i].name);
        printf("\nPlease enter the book number or ISBN: ");
        scanf("%d", &bk[i].isbn);
        printf("\nEnter the book rating: ");
        scanf("%d", &bk[i].rating);
    }
    fclose(fptr);
}
void read()
{
    int i;
    FILE *fptr;
    fptr = fopen("Books.bin", "wb+");
    printf("\tNAME\tRATING\tISBN");
    for (i = 0; i < n; i++)
    {
        printf("\n\t%s\t%d\t%d", bk[i].name, bk[i].rating, bk[i].isbn);
    }
    fclose(fptr);
}
void search()
{
    int isbn, i;
    FILE *fptr;
    fptr = fopen("Books.bin", "wb+");
    printf("Enter the book isbn to be searched: ");
    scanf("%d", &isbn);
    printf("\tNAME\tRATING\tISBN");
    for (i = 0; i < n; i++)
    {
        if (bk[i].isbn == isbn)
        {
            printf("Present book is %s rating is %d", bk[i].name, bk[i].rating, bk[i].isbn);
        }
    }
}
void sort1()
{
    int i, j, largest, a;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (bk[i].rating < bk[j].rating)
            {
                a = bk[i].rating;
                bk[i].rating = bk[j].rating;
                bk[j].rating = a;
            }
        }
        for (i = 0; i < 3; ++i)
        {

            printf("\n\t%s\t%d", bk[i].name, bk[i].rating);
        }
    }
}
int main()
{
    int i, choice;
    printf("Enter the number of books: ");
    scanf("%d", &n);
loop:
    printf("\nEnter 1 to enter the book details");
    printf("\nEnter 2 to read book deatils");
    printf("\nEnter 3 to search a book by its number: ");
    printf("\nWanna see the alphabetically ordered list?");
    printf("\nEnter 4 to get it");
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
        sort1();
    }
    goto loop;
}