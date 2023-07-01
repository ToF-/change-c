#include "unity.h"
#include "unity_fixture.h"
#include "unity_memory.h"
#include "change.h"

TEST_GROUP(change);

TEST_SETUP(change) { }

TEST_TEAR_DOWN(change) { }

TEST(change, trivial_case) {
    int max_coins = 1;
    int coins[] = { 5 };
    TEST_ASSERT_EQUAL(0, solutions(4, max_coins, coins));
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
