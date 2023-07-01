#include <stdio.h>
#include <stdlib.h>
#include "change.h"

#define MAX_COINS 100

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
    printf("%d\n", solutions(target, max_coins, coins));
    return 0;
}
