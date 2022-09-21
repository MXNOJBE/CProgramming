#include <stdio.h>
#include <stdlib.h>

struct book
{
    int id;
    int rate;
    char title[50];
} tmp;

void main()
{
    int ch, n, i, j, flag = 1;
    printf("\nEnter the number of books :");
    scanf("%d", &n);
    struct book p[n];
    FILE *fptr;
    fptr = fopen("C:\\Users\\MXNOJBE\\Desktop\\CLab\\book.bin", "wb+");
    while (flag)
    {
        printf("\n1. Enter book details");
        printf("\n2. Display book details");
        printf("\n3. Search for book");
        printf("\n4. List 3 highiest rated books");
        printf("\n5. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
            {
                system("clear");
                printf("\nEnter book %d details", i + 1);
                printf("\nEnter id : ");
                scanf("%d", &p[i].id);
                printf("\nEnter title : ");
                scanf("%s", p[i].title);
                printf("\nEnter rate : ");
                scanf("%d", &p[i].rate);
                fwrite(&p[i], sizeof(struct book), 1, fptr);
            }
            // fclose(fptr)
            break;

        case 2:
            system("cls");
            printf("\n  ID \tTITLE \tRATE\n");
            printf("-----------------------");
            for (i = 0; i < n; i++)
            {
                fread(&p[i], sizeof(struct book), 1, fptr);
                printf("\n  %d \t%s \t%d", p[i].id, p[i].title, p[i].rate);
            }
            printf("\n-----------------------\n");
            // fclose(fptr)
            break;
        case 3:
            system("cls");
            int di;
            printf("Enter id to be searched");
            scanf("%d", &di);
            for (i = 0; i < n; i++)
            {
                fread(&p[i], sizeof(struct book), 1, fptr);
                if (p[i].id == di)
                {
                    printf("\n  ID \tTITLE \tRATE\n");
                    printf("-----------------------");
                    printf("\n  %d \t%s \t%d\n", p[i].id, p[i].title, p[i].rate);
                    printf("\n-----------------------\n");
                }
            }
            // fclose(fptr)
            break;
        case 4:
            system("cls");
            for (i = 0; i < n - 1; i++)
            {
                for (j = 1; j < n; j++)
                {
                    if (p[i].rate < p[j].rate)
                    {
                        tmp = p[i];
                        p[i] = p[j];
                        p[j] = tmp;
                    }
                }
            }
            printf("\nTop 3 Highiest Rated Books");
            printf("\n  ID \tTITLE \tRATE\n");
            printf("-----------------------");
            for (i = 0; i < 3; i++)
            {
                fread(&p[i], sizeof(struct book), 1, fptr);
                printf("\n  %d \t%s \t%d", p[i].id, p[i].title, p[i].rate);
            }
            printf("\n-----------------------\n");
            break;
        case 5:
            system("cls");
            printf("Thank you \n");
            flag = 0;
            fclose(fptr);
            break;
        default:
            system("cls");
            printf("Error\n");
            flag = 0;
            fclose(fptr);
            break;
        }
    }
}