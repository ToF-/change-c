#include "unity.h"
#include "unity_fixture.h"
#include "unity_memory.h"
#include "change.h"

TEST_GROUP(change);

TEST_SETUP(change) { }

TEST_TEAR_DOWN(change) { }

TEST(change, null_case) {
    int max_coins = 0;
    int coins[] = { };
    TEST_ASSERT_EQUAL(0, solutions(42, max_coins, coins));
}

TEST(change, one_coin_target_too_small) {
    int max_coins = 1;
    int coins[] = { 5 };
    TEST_ASSERT_EQUAL(0, solutions(4, max_coins, coins));
}

TEST(change, one_coin_target_too_large) {
    int max_coins = 1;
    int coins[] = { 5 };
    TEST_ASSERT_EQUAL(0, solutions(6, max_coins, coins));
}

TEST(change, simple_case) {
    int max_coins = 1;
    int coins[] = { 5 };
    TEST_ASSERT_EQUAL(1, solutions(5, max_coins, coins));
}

TEST(change, two_coins_one_solution) {
    int max_coins = 2;
    int coins[] = { 2, 5 };
    TEST_ASSERT_EQUAL(1, solutions(4, max_coins, coins));
}

TEST(change, two_coins_two_solutions) {
    int max_coins = 2;
    int coins[] = { 1, 5 };
    TEST_ASSERT_EQUAL(2, solutions(6, max_coins, coins));
}

TEST(change, nominal_case) {
    int max_coins = 4;
    int coins[] = { 2, 5, 3, 6 };
    TEST_ASSERT_EQUAL(5, solutions(10, max_coins, coins));
}

