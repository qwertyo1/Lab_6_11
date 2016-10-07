#include "stdafx.h"

int main()
{
	set t;
	t.addToSet("huy");
	t.addToSet("pizda");
	t.addToSet("djigurda");
	t.printSet();
	set t2;
	t2.addToSet("huynane");
	t2.addToSet("pizda");
	t2.addToSet("djigurda");
	t2.addToSet("djigurdinkaa");
	t2.printSet();
	cout << t.checkBelongs("huqy") << endl;
	set combo;
	combo = t.intersectionOfSets(t2);
	combo.printSet();
	set combo1;
	combo1 = t.mergeOfSets(t2);
	combo1.printSet();
	system("pause");
	return 0;
}