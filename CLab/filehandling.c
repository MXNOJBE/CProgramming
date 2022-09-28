#include <stdio.h>
#include <stdlib.h>
//#include <unistd.h>

struct book
{
    char bookname[50];
    int bookno;
} b[2];

void write()
{
    int n;
    FILE *p;
    p = fopen("C:\\Users\\MXNOJBE\\Desktop\\c\\CLab\\file.bin", "wb+");

    if (p == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the book Name: ");
        scanf("%s", &b[i].bookname);
        printf("Enter the book code: ");
        scanf("%d", &b[i].bookno);
    }
    fclose(p);
}
void display()
{
    int n;
    FILE *p;
    p = fopen("C:\\Users\\MXNOJBE\\Desktop\\c\\CLab\\file.bin", "wb+");

    if (p == NULL)
    {
        printf("Error!");
        exit(1);
    }
    for (int i = 0; i < 2; i++)
    {
        // fread(&b, sizeof(struct book), 1, p);
        printf("\n\t%s\t%d", b[i].bookname, b[i].bookno);
        // fwrite(&p, sizeof(struct book), 1, p);
        fclose(p);
    }
}

int main()
{
    int choice, *p;
loop:
    printf("\nEnter 1 input the values\n");
    printf("Enter 2 to view in a format");
    printf("\nEnter the choice: ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        write(&p);
    }
    else
        display(&p);
    goto loop;
}
