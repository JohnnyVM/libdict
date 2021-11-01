#include "CppUTest/CommandLineTestRunner.h"
#include "CppUTest/TestHarness_c.h"

#include "dict.h"

/** For each C test group */
TEST_GROUP_C_WRAPPER(dict)
{
    TEST_GROUP_C_SETUP_WRAPPER(dict); /** optional */
    TEST_GROUP_C_TEARDOWN_WRAPPER(dict); /** optional */
};

TEST_C_WRAPPER(dict, dummy_test);

int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}
