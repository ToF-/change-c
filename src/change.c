#include <stdio.h>
#include <stdlib.h>
#include "change.h"

int solutions_from(int start, int target, int max_coins, int *coins) {
    if(start >= max_coins)
        return 0;
    if(coins[start] > target)
        return solutions_from(start+1, target, max_coins, coins);
    if(coins[start] < target)
        return solutions_from(0, target - coins[start], max_coins, coins);
    return 1;
}

int cmp_int_desc(const void *va, const void *vb)
{
  int a = *(int *)va, b = *(int *) vb;
  return a < b ? +1 : a > b ? -1 : 0;
}
int solutions(int target, int max_coins, int *coins) {
    qsort(coins, max_coins, sizeof(int), cmp_int_desc);
    return solutions_from(0, target, max_coins, coins);
}
