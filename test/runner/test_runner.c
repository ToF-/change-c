#include "unity_fixture.h"

TEST_GROUP_RUNNER(change) {
    RUN_TEST_CASE(change, trivial_case);
    RUN_TEST_CASE(change, simple_case);
    RUN_TEST_CASE(change, two_coins_one_solution);
}
