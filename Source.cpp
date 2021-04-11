#include "SortArray.h"
#include "XorArray.h"

int main()
{
	SortArray mas1(3), mas2(3), mas3(6);
	cout << "Enter first SortArray: ?" << endl;
	mas1.Read(mas1);
	cout << "Enter second SortArray: ?" << endl;
	mas2.Read(mas2);
	cout << "Sort of first SortArray:" << endl;
	mas1.foreach();
	mas1.Print(mas1);
	cout << "Sort of second SortArray:" << endl;
	mas2.foreach();
	mas2.Print(mas2);
	cout << "Add SortArrays:" << endl;
	mas1.add(mas1, mas2, mas3);
	mas3.Print(mas3);
	cout << endl << endl << endl;
	XorArray mas5(3), mas6(3), mas7(2);
	cout << "Enter first XorArray: ?" << endl;
	mas5.Read(mas5);
	cout << "Enter second XorArray: ?" << endl;
	mas6.Read(mas6);
	cout << "Exclusive or:" << endl;
	mas5.add(mas5, mas6, mas7);
	mas7.Print(mas7);
	cout << "Root of elements firts XorArray" << endl;
	mas5.foreach();
	mas5.Print(mas5);

	return 0;
}