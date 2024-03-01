#include<stdio.h>
#include<string.h>
#define MAX_CHAR 50
typedef char string[MAX_CHAR+1];

typedef struct block{
    int dat;
    struct block *nxt, *pre;
} block;

void main (){
    block a;
}