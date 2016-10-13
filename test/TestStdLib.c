#include <embUnit/embUnit.h>

/*embunit:include=+ */
#include "../libc/include/stdlib.h"
#include "limits.h"
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

static void testItoa_return_minus1_for_minus1(void)
{
    char buff[50];
    TEST_ASSERT_EQUAL_STRING("-1", itoa(-1, buff, 10));
}

static void testItoa_return1_for1(void)
{
	char buff[50];
    TEST_ASSERT_EQUAL_STRING("1", itoa(1, buff, 10));
}

static void testItoa_return10_for10(void)
{
    char buff[50];
	TEST_ASSERT_EQUAL_STRING("10", itoa(10, buff, 10));
}

static void testItoa_return_minus10_for_minus10(void)
{
    char buff[50];
	TEST_ASSERT_EQUAL_STRING("-10", itoa(-10, buff, 10));
}

static void testItoa_for_INT_MIN(void)
{
    char buff[50];
	TEST_ASSERT_EQUAL_STRING("-2147483648", itoa(INT_MIN, buff, 10));
}

/*embunit:impl=- */
TestRef TestStdLib_tests(void)
{
	EMB_UNIT_TESTFIXTURES(fixtures) {
	/*embunit:fixtures=+ */
		new_TestFixture("testItoa_return0_for0",testItoa_return0_for0),
		new_TestFixture("testItoa_return_minus1_for_minus1",testItoa_return_minus1_for_minus1),
		new_TestFixture("testItoa_return1_for1",testItoa_return1_for1),
		new_TestFixture("testItoa_return10_for10",testItoa_return10_for10),
		new_TestFixture("testItoa_return_minus10_for_minus10",testItoa_return_minus10_for_minus10),
		new_TestFixture("testItoa_for_INT_MIN",testItoa_for_INT_MIN),
	/*embunit:fixtures=- */
	};
	EMB_UNIT_TESTCALLER(TestStdLib,"TestStdLib",setUp,tearDown,fixtures);
	return (TestRef)&TestStdLib;
};
