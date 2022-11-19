#include <iostream>
using namespace std;
int main()
{
	cout << "Size of long = " << sizeof(long) << endl;
	/* size of long == 4 in Windows
	 * size of long long == 8 in Windows
	 * size of long == 8 in Linux
	 * szie of long long == 8 in Linux
	 */
	cout << "Size of long double" << sizeof(long double) << endl;
	/*Size of long double == 8 in Windows
	* Size of long double == 16 in Linux
	*/
}
