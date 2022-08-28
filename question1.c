#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#pragma warning(disable:4996)
int main_1_1()
{
    int* arr;
    int* ptr;
    FILE* f = fopen("homework_week3.d1", "w");
    arr = malloc(sizeof(int) * 10);
    if (!arr || !f)
    {
        printf("error");
        exit(1);
    }
    ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("please enter a number:\n"); 
        scanf("%d", arr);
        arr++;
    }
    int write=fwrite(ptr, sizeof(int), 10, f);
    free(ptr);
    fclose(f);
}

