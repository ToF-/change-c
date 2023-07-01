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
    int result = solutions(4, max_coins, coins);
    TEST_ASSERT_EQUAL(0, result);
}
