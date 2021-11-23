#include <stdio.h>
#include "my_mat.h"
#define n 10

int main()
{

    char x = 1;

    while (x != 'D')
    {

        scanf(" %c", &x);
        switch (x)
        {
        case 'A':
            funA();
            break;

        case 'B':
            funB();
            break;

        case 'C':
            funC();
            break;

        case 'D':
            break;
        default:
            printf("Error");
            break;
        }
    }
    return 0;
}
