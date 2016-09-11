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
static void testStrLen(void)
{
	TEST_ASSERT_EQUAL_INT(6, strlen("Hello!"));
}

/*embunit:impl=- */
TestRef TestString_tests(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
	/*embunit:fixtures=+ */
		new_TestFixture("testStrLen",testStrLen),
	/*embunit:fixtures=- */
	};
	EMB_UNIT_TESTCALLER(TestString,"TestString",setUp,tearDown,fixtures);
	return (TestRef)&TestString;
};
