#include "stdafx.h"

using namespace std;

class set {
private:
	vector<string> data;
	int size;
public:
	void addToSet(string value);
	void printSet();
	int checkBelongs(string elem);
	set intersectionOfSets(set bSet);
	set mergeOfSets(set bSet);
};