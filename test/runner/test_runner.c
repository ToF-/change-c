#include "unity_fixture.h"

TEST_GROUP_RUNNER(change) {
    RUN_TEST_CASE(change, null_case);
    RUN_TEST_CASE(change, one_coin_target_too_small);
    RUN_TEST_CASE(change, one_coin_target_too_large);
    RUN_TEST_CASE(change, simple_case);
    RUN_TEST_CASE(change, two_coins_one_solution);
    RUN_TEST_CASE(change, two_coins_two_solutions);
    RUN_TEST_CASE(change, nominal_case);
}
