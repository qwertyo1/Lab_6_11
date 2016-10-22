#include "stdafx.h"

using namespace std;

class diary : public set {
public:
	void add(int day, int mounth, int dayOfTheWeek, string plans);
	//void setPlans(string plans);
	//string getPlans();
};