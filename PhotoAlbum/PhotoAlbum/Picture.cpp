#include "stdafx.h"
#include "Picture.h"


Picture::Picture(string namePicture, string shootDate, int sizeOfPictureInKo, int widthPicture, int heightPicture)
{
	this->namePicture = namePicture;
	this->shootDate = shootDate;
	this->sizeOfPictureInKo = sizeOfPictureInKo;
	this->widthPicture = widthPicture;
	this->heightPicture = heightPicture;
}

/**
 * \brief 
 * \param namePicture 
 * \param shootDate 
 * \param widthPicture 
 * \param heightPicture 
 */
Picture::Picture(string namePicture, string shootDate, int widthPicture, int heightPicture)
{
	this->namePicture = namePicture;
	this->shootDate = shootDate;
	this->widthPicture = widthPicture;
	this->heightPicture = heightPicture;
	this->sizeOfPictureInKo = getSizeByWidthAndHeight();
}

Picture::Picture(string namePicture, string shootDate, int size)
{
	this->namePicture = namePicture;
	this->shootDate = shootDate;
	this->sizeOfPictureInKo = size;
}

/**
 * \brief 
 * \param picture 
 */
Picture::Picture(const Picture& picture)
{
	this->namePicture = picture.namePicture;
	this->shootDate = picture.shootDate;
	this->sizeOfPictureInKo = picture.sizeOfPictureInKo;
	this->widthPicture = picture.widthPicture;
	this->heightPicture = picture.heightPicture;
}

/**
 * \brief 
 * \return 
 */
int Picture::getSizeByWidthAndHeight()
{
	return sizeOfPictureInKo = heightPicture * widthPicture / 1000;
}

/**
 * \brief 
 * \param wordKey 
 */
void Picture::addWordKey(const string& wordKey)
{
	wordKeys.push_back(wordKey);
}

/**
 * \brief 
 * \param picture 
 * \return 
 */
int Picture::findLowerLengthName(const string& picture) const
{
	if (this->namePicture.length() > picture.length())
		return picture.length();
	return this->namePicture.length();
}

/**
 * \brief 
 * \param 
 * \return 
 */
string Picture::getWordKey()
{
	return wordKeys[0];
}

/**
 * \brief 
 * \param picture 
 * \return 
 */
bool Picture::operator<(const Picture& picture) const
{
	return this->namePicture < picture.namePicture;
}

Picture::~Picture()
{
	;
}
