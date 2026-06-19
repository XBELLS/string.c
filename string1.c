#include <stdio.h>

int main()
{
    char c;
    while(c != 65){
        printf("Uma letra: \n");
        scanf(" %c", &c);
        printf("Digitou:%c\n", c);
    }

    return 0;
}
