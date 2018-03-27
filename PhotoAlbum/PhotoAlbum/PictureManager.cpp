#include "stdafx.h"
#include "PictureManager.h"
#include "iostream"
#include <map>
#include <algorithm>


PictureManager::PictureManager(string name)
{
	this->name = name;
}

void PictureManager::addPicture(string name, string shootDate, int width, int height)
{
	pictures.push_back(new Picture(name,shootDate,width,height));
}

void PictureManager::addPictureKeyWord(int indicator, string keyWord)
{
	Picture * picture = pictures[indicator];
	picture->addWordKey(keyWord);
}

/**
 * \brief sort vector of Picture by name
 */
void PictureManager::sortByName()
{
	sort(pictures.begin(), pictures.end());
}

/**
 * \brief sort vector of Picture by word keys attached to it
 */
void PictureManager::sortByKey()
{
	multimap<string, Picture*> sortedPictureList;
	for (auto& picture : pictures)
	{
		sortedPictureList.insert(make_pair(picture->getWordKey(), picture));
	}

	for (auto& pictureList : sortedPictureList)
	{
		cout << pictureList.first << " : "<< pictureList.second->getNameOfPicture() << endl;
	}
}

void PictureManager::displayElements()
{
	for (auto& picture : pictures)
	{
		cout << picture->getNameOfPicture() << endl;
	}
}


PictureManager::~PictureManager()
{
	;
}
