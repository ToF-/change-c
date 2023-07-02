#include <stdio.h>
#include <stdlib.h>
#include "change.h"

int solutions_from(int target, int last, int *coins) {
    if(target == 0)
        return 1;
    if(last < 0 || target < 0)
        return 0;
    int coin = coins[last];
    if(target < coin)
        return solutions_from(target, last-1, coins);
    int with    = solutions_from(target - coin, last, coins);
    int without = solutions_from(target, last-1, coins);
    return with + without;
}

int cmp_int_asc(const void *va, const void *vb)
{
  int a = *(int *)va, b = *(int *) vb;
  return a < b ? -1 : a > b ? +1 : 0;
}

int solutions(int target, int max_coins, int *coins) {
    qsort(coins, max_coins, sizeof(int), cmp_int_asc);
    return solutions_from(target, max_coins-1, coins);
}
