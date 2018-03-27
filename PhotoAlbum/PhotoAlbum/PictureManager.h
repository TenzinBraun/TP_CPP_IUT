#pragma once
#include <vector>
#include "Picture.h"


using namespace std;

class PictureManager
{

private:
	vector<Picture*> pictures;
	string name;
public:
	PictureManager(string name);

	void addPicture(string name, string shootDate, int width, int height);
	void addPictureKeyWord(int indicator, string keyWord);

	void sortByName();
	void sortByKey();

	void displayElements();

	~PictureManager();
};

