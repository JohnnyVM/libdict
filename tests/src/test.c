#include "CppUTest/TestHarness_c.h"

#include "dict.h"

TEST_GROUP_C_SETUP(dict)
{
}

TEST_GROUP_C_TEARDOWN(dict)
{
}

TEST_C(dict, dummy_test)
{
	const char a[] = "a";
	Dict *dict = create_dict();
	dict_set(dict, "a", &a);
	CHECK_C(*(char*)dict_get(dict, "a", NULL)=='a');
	CHECK_C(*(char*)dict_at(dict, 0)=='a');
}

