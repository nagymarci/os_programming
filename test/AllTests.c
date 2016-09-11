#include "embUnit/embUnit.h"

/*embunit:extern=+ */
extern TestRef TestString_tests(void);
extern TestRef TestStdLib_tests(void);
/*embunit:extern=- */

int main(int argc,char *argv[])
{
	TestRunner_start();
	/*embunit:run=+ */
		TestRunner_runTest(TestString_tests());
		TestRunner_runTest(TestStdLib_tests());
	/*embunit:run=- */
	TestRunner_end();
	return 0;
}
