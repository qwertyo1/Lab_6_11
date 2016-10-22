#include "stdafx.h"

void set::addToSet(string value) {
	data.push_back(value);
}

void set::printSet() {
	for (string a : data) {
		cout << a << " ";
	}
	cout << endl;
}

int set::checkBelongs(string elem) {
	for (string a : data)
		if (elem == a) return 1;
	return 0;
}

set set::intersectionOfSets(set bSet) {
	set tempSet;
	for (string a : data)
		for (string b : bSet.data)
			if (a == b) tempSet.addToSet(a);
	return tempSet;
}

set set::mergeOfSets(set bSet) {
	set tempSet;
	for (string a : data)
		tempSet.addToSet(a);
	for (string b : bSet.data)
		tempSet.addToSet(b);
	return tempSet;
}