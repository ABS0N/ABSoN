#include <stdio.h>
#include <stdlib.h>

typedef struct Book
{
    char* author, title;
    int date;
    char* chategory;
} Book;

void menu ()
{
    int num;
    printf("1 - Create new record\n2 - Modification of an existing record\n3 - Removal of an existing record\n\n0 - Quit\n");
    scanf("%d", &num);
    switch (num)
        {
            case 1:
                create();
                break;
            case 2:
                edit();
                break;
            case 3:
                del();
                break;
            case 0:
                return;
            default:
                printf("Out of range");
                break;
        }
    return;
}

void create ()
{
    system("cls");
    printf("This site will be the creation module");
    return;
}

void edit ()
{
    printf("This site will be the modification module");
    return;
}

void del ()
{
    printf("This site will be the removal module");
    return;
}

int main()
{
    menu();
    return 0;
}
