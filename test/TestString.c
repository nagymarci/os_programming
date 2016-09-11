#include <embUnit/embUnit.h>

/*embunit:include=+ */
#include "../libc/include/string.h"
/*embunit:include=- */

static void setUp(void)
{
	/* initialize */
}

static void tearDown(void)
{
	/* terminate */
}

/*embunit:impl=+ */
static void testStrLen_return6(void)
{
	TEST_ASSERT_EQUAL_INT(6, strlen("Hello!"));
}

static void testStrLen_forEmpty_return0(void)
{
	TEST_ASSERT_EQUAL_INT(0, strlen(""));
}

/*embunit:impl=- */
TestRef TestString_tests(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
	/*embunit:fixtures=+ */
		new_TestFixture("testStrLen_return6",testStrLen_return6),
		new_TestFixture("testStrLen_forEmpty_return0",testStrLen_forEmpty_return0),
	/*embunit:fixtures=- */
	};
	EMB_UNIT_TESTCALLER(TestString,"TestString",setUp,tearDown,fixtures);
	return (TestRef)&TestString;
};
