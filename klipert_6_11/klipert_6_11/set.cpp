#include "stdafx.h"

void set::addToSet(element value) {
	data.push_back(value);
}

void set::setPlansByDate(int day, int mounth, string plans) {
	int i = 0;
	for (element a : data) {
		if ((mounth == a.mounth) && (day == a.day)) {
			data[i].plans = plans;
			return;
		}
		i++;
	}
	element b;
	b.day = day;
	b.mounth = mounth;
	cout << "А какой это будет день недели по счету?\n";
	cin >> b.dayOfTheWeek;
	b.plans = plans;
	addToSet(b);
}

string set::getPlansByDate(int day, int mounth) {
	for (element a : data)
		if ((mounth == a.mounth) && (day == a.day)) return a.plans;
	return "В этот день нет планов :)";
}


void set::printSet() {
	cout << " |" << "    Число    " << "|" << "    Месяц    " << "|" << " День недели " << "|" << "    Планы    " << "|" << endl;
	for (element a : data) {
		cout << " |" << setw(13) << a.day << "|" << setw(13) << a.mounth << "|" << setw(13) << a.dayOfTheWeek << "|" << setw(13) << a.plans << "|" << endl;
	}
	cout << endl;
}


int set::checkBelongs(int day, int mounth) {
	for (element a : data)
		if ((mounth == a.mounth) && (day == a.day)) return 1;
	return 0;
}

set set::intersectionOfSets(set bSet) {
	set tempSet;
	for (element a : data)
		for (element b : bSet.data)
			if (a == b) tempSet.addToSet(a);
	return tempSet;
}

set set::mergeOfSets(set bSet) {
	set tempSet;
	for (element a : data)
		tempSet.addToSet(a);
	for (element b : bSet.data)
		tempSet.addToSet(b);
	return tempSet;
}