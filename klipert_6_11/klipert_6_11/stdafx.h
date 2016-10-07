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
};