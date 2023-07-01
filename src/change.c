#include <stdio.h>
#include "change.h"

int solutions_from(int start, int target, int max_coins, int *coins) {
    if(coins[start] == target)
        return 1;
    if(coins[start] > target)
        return 0;
}
int solutions(int target, int max_coins, int *coins) {
    return solutions_from(0, target, max_coins, coins);
}
