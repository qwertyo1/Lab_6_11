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
public:
	void addToSet(element elem);
	string getPlansByDate(int day, int mounth);
	void setPlansByDate(int day, int mounth, string plans);
	element getElemByDate(int day, int mounth);
	//void printSet();
	int checkBelongs(int day, int mounth);
	//set intersectionOfSets(set bSet);
	set mergeOfSets(set bSet);
};