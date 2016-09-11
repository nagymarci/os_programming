#include <embUnit/embUnit.h>

/*embunit:include=+ */
#include "../libc/include/stdlib.h"
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
static void testItoa_return0_for0(void)
{
    char buff[50];
	TEST_ASSERT_EQUAL_STRING("0", itoa(0, buff, 10));
}

/*embunit:impl=- */
TestRef TestStdLib_tests(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
	/*embunit:fixtures=+ */
		new_TestFixture("testItoa_return0_for0",testItoa_return0_for0),
	/*embunit:fixtures=- */
	};
	EMB_UNIT_TESTCALLER(TestStdLib,"TestStdLib",setUp,tearDown,fixtures);
	return (TestRef)&TestStdLib;
};
