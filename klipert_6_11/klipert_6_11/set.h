#include "stdafx.h"

using namespace std;

class set
{
protected:
	struct element{
		int day;
		int mounth;
		int dayOfTheWeek;
		string plans;
	};
	vector<element> data;
	int size;
	void addToSet(element elem);
	int checkBelongs(int day, int mounth);
	set intersectionOfSets(set bSet);
	set mergeOfSets(set bSet);
public:
	string getPlansByDate(int day, int mounth);
	void setPlansByDate(int day, int mounth, string plans);
	void printSet();
};