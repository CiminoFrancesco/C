#include <stdio.h>
#include <stdlib.h>

int lunghezza (char stringa[], int i)
{
    int l;

    for(i=0; stringa[i]!='\0'; i++)
    {
        l++;
    }
    return l;
}
calcolo_frasi

int main()
{
    char stringa[30];
    int i;
    int size;

    printf("Inserire frase");
    scanf("%[^\n]s", &stringa);

    size=lunghezza(stringa, i);
    printf("lunghezza frase--> %d lettere", size);


    return 0;
}
