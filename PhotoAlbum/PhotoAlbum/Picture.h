#pragma once
#include <string>
#include <vector>

using namespace std;

class Picture
{
private:
	string namePicture;
	string shootDate;
	int sizeOfPictureInKo;
	int widthPicture = 0;
	int heightPicture = 0;

	vector<string> wordKeys;

public:
	Picture(string namePicture, string shootDate, int sizeOfPictureInKo, int widthPicture, int heightPicture);
	Picture(string namePicture, string shootDate, int widthPicture, int heightPicture);
	Picture(string namePicture, string shootDate, int size);
	Picture(const Picture& picture);
	
	int getSizeByWidthAndHeight();
	
	void addWordKey(const string& wordKey);

	int findLowerLengthName(const string& picture) const;

	string getWordKey();
	string getNameOfPicture() const { return this->namePicture; }
	bool operator<(const Picture& picture) const;
	~Picture();
};

