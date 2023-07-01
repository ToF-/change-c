#include "unity.h"
#include "unity_fixture.h"
#include "unity_memory.h"
#include "app.h"

TEST_GROUP(app);

TEST_SETUP(app) { }

TEST_TEAR_DOWN(app) { }

TEST(app, dummy) {
  int result;
  result = doit();
  TEST_ASSERT_EQUAL(42, result);
}
