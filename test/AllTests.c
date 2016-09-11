#include <embUnit/embUnit.h>

/*embunit:extern=+ */
extern TestRef TestString_tests(void);
/*embunit:extern=- */

int main(int argc,char *argv[])
{
	TestRunner_start();
	/*embunit:run=+ */
		TestRunner_runTest(TestString_tests());
	/*embunit:run=- */
	TestRunner_end();
	return 0;
}
