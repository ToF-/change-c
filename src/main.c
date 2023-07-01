#include <stdio.h>
#include <stdlib.h>
#include "change.h"

#define MAX_COINS 100

int cmp_int_desc(const void *va, const void *vb)
{
  int a = *(int *)va, b = *(int *) vb;
  return a < b ? +1 : a > b ? -1 : 0;
}
int main(int argc, char *argv[]) {
    int coins[MAX_COINS];
    int max_coins = 0;
    if(argc < 2) {
        fprintf(stderr, "usage: change N C1 C2 .. CN\n");
        return 1;
    }
    char *end;
    int target = strtol(argv[1], &end, 10);
    for(int i=2; i<argc; i++) {
        coins[max_coins++] = strtol(argv[i], &end, 10);
    }
    qsort(coins, max_coins, sizeof(int), cmp_int_desc);
    printf("%d\n", target);
    for(int i=0; i<max_coins; i++) {
        printf("%d ", coins[i]);
    }
    return 0;
}
