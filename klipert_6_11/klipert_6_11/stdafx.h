#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class set {
private:
	vector<string> data;
	int size;
public:
	void addToSet(string value) {
		data.push_back(value);
	}
	void printSet() {
		for (string a : data) {
			cout << a << " ";
		}
		cout << endl;
	}
	int checkBelongs(string elem) {
		for (string a : data)
			if (elem == a) return 1;
		return 0;
	}
	set intersectionOfSets(set bSet) {
		set tempSet;
		for (string a : data)
			for (string b : bSet.data)
				if (a == b) tempSet.addToSet(a);
		return tempSet;
	}
	set mergeOfSets(set bSet) {
		set tempSet;
		for (string a : data)
			tempSet.addToSet(a);
		for (string b : bSet.data)
			tempSet.addToSet(b);
		return tempSet;
	}
};