#include "stdafx.h"

int main()
{
	setlocale(LC_ALL,"ru");
	diary gg;
	gg.add(1,1,1,"Code");
	gg.add(11, 11, 7, "Swim");
	gg.add(12, 9, 3, "Walk");
	gg.printSet();
	gg.setPlansByDate(12, 14, "drebeden");
	cout << gg.getPlansByDate(1, 1) << endl;
	gg.printSet();
	gg.setPlansByDate(1, 1, "g");
	gg.printSet();
	system("pause");
	return 0;
}