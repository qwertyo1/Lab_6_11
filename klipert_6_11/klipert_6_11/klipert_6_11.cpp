#include "stdafx.h"

int main()
{
	setlocale(LC_ALL,"ru");
	set t;
	t.addToSet("сковорода");
	t.addToSet("картошка");
	t.addToSet("бетон");
	t.printSet();
	set t2;
	t2.addToSet("хлеб");
	t2.addToSet("города");
	t2.addToSet("окрошка");
	t2.addToSet("јнтон");
	t2.printSet();
	cout << t.checkBelongs("бетон") << endl;
	cout << t.checkBelongs("бетон") << endl;
	set combo;
	combo = t.intersectionOfSets(t2);
	combo.printSet();
	set combo1;
	combo1 = t.mergeOfSets(t2);
	combo1.printSet();
	system("pause");
	system("cls");
	//¬ыше была груба€ демонстраци€ работоспособности классов


	system("pause");
	return 0;
}