#include "stdafx.h"

void set::addToSet(element value) {
	data.push_back(value);
}

void set::setPlansByDate(int day, int mounth, string plans) {

}

string set::getPlansByDate(int day, int mounth) {
	element a = getElemByDate(day, mounth);
	return a.plans;
}
/*
void set::printSet() {
	for (string a : data) {
		cout << a << " ";
	}
	cout << endl;
}
*/

set::element set::getElemByDate(int day, int mounth) {
	for (element a : data)
		if ((mounth == a.mounth) && (day == a.day)) return a;
	return;
}

int set::checkBelongs(int day, int mounth) {
	for (element a : data)
		if ((mounth == a.mounth) && (day == a.day)) return 1;
	return 0;
}

/*
set set::intersectionOfSets(set bSet) {
	set tempSet;
	for (element a : data)
		for (element b : bSet.data)
			if (a == b) tempSet.addToSet(a);
	return tempSet;
}
*/

set set::mergeOfSets(set bSet) {
	set tempSet;
	for (element a : data)
		tempSet.addToSet(a);
	for (element b : bSet.data)
		tempSet.addToSet(b);
	return tempSet;
}