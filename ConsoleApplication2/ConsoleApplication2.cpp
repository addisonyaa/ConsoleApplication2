#include <iostream>
#include <string>
using namespace std;
int main()
{
	int int1 = 45;
	int int2 = 20;
	int int3 = 20;
	int int4 = 25;

	if (int2 == int3)
	{
		cout << "operator == " << "true" << endl;
	}
	else
	{
		cout << "operator == " << "false" << endl;
	}
	if (int2 != int4)
	{
		cout << "operator != " << "true" << endl;
	}
	else
	{
		cout << "operator != " << "false" << endl;
	}
	if (int1 > int3)
	{
		cout << "operator > " << "true" << endl;
	}
	else
	{
		cout << "operator > " << "false" << endl;
	}
	if (int3 < int4)
	{
		cout << "operator < " << "true" << endl;
	}
	else
	{
		cout << "operator < " << "false" << endl;
	}
	if (int1 >= int3)
	{
		cout << "operator >= " << "true" << endl;
	}
	else
	{
		cout << "operator >= " << "false" << endl;
	}
	if (int2 <= int4)
	{
		cout << "operator <= " << "true" << endl;
	}
	else
	{
		cout << "operator <= " << "false" << endl;
	}
	if (int4 < int1 && int3 == int2)
	{
		cout << "operator && " << "true" << endl;
	}
	else
	{
		cout << "operator && " << "false" << endl;
	}
	if (int4 >= int2 || int1 == int2)
	{
		cout << "operator || " << "true" << endl;
	}
	else
	{
		cout << "operator || " << "false" << endl;
	}
}
