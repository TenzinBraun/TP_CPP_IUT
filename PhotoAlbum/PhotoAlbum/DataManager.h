#pragma once

#include <vector>
#include "Picture.h"

using namespace std;
class DataManager
{
private:
	vector<Picture*> picturesFromData;

public:
	DataManager();

	void initializePicturesFromData();
	void addPicturesFromData(string name, string date, int size);
	void pairPicturesDataWithWordKey();
	void sortByKey();
	~DataManager();
};

