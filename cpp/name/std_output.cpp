#include <iostream>

using namespace std;
/* could create naming conflicts due to the high likelyhood
 * of a variable already using the same name */

int main(void)
{
	string str = "Cool String";

	cout << "Hi" << endl;

	cout << str << '\n';

	return 0;
}
