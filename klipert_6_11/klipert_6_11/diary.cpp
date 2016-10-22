#include "stdafx.h"

void diary::add(int day, int mounth, int dayOfTheWeek, string plans) {
	element elem;
	elem.day = day;
	elem.mounth = mounth;
	elem.dayOfTheWeek = dayOfTheWeek;
	elem.plans = plans;
	addToSet(elem);
}
/*
void diary::setPlans(string plans) {
	//this->plans = plans;
}

string diary::getPlans() {
	//return plans;
}
*/