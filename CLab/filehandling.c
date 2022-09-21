#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>

struct book
{
    char bookname[50];
    int bookno;
};

void write()
{
    int n;
    FILE *p;
    struct book b;

    p = fopen("C:\\Users\\MXNOJBE\\Desktop\\CLab\\book.bin", "w");
    if (p == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the book Name: ");
        scanf("%s", &b.bookname);
        printf("Enter the book code: ");
        scanf("%d", &b.bookno);
    }
    fclose(p);
}
void display()
{
    int n;
    FILE *p;
    struct book b;

    p = fopen("C:\\Users\\MXNOJBE\\Desktop\\CLab\\book.bin", "rb");
    if (p == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (int i = 0; i < 2; i++)
    {
        fread(&p, sizeof(struct book), 1, p);
        printf("\n\t%s\t%d", b.bookname, b.bookno);
        // fwrite(&p, sizeof(struct book), 1, p);
        fclose(p);
    }
}

int main()
{
    int choice;
loop:
    printf("\nEnter 1 input the values\n");
    printf("Enter 2 to view in a format");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        write();
    }
    else
        display();
    goto loop;
}