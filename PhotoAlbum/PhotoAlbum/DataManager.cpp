#include "stdafx.h"
#include "DataManager.h"
#include "Data.h"
#include <map>
#include <iostream>


DataManager::DataManager()
{
	;
}

void DataManager::initializePicturesFromData()
{
	for(auto i = 0; i < NB_IMAGES; i++)
	{
		addPicturesFromData(imageName[i], date[i], taille[i]);
	}
}

void DataManager::addPicturesFromData(string name, string date, int size)
{
	picturesFromData.push_back(new Picture(name, date, size));
}

void DataManager::pairPicturesDataWithWordKey()
{
	for(auto i = 0; i < NB_IMAGES; i++)
	{
		for(auto j = 0; j < numberOfMCpI[i]; j++)
		{
			picturesFromData[i]->addWordKey(lmc[i][j]);
			cout << lmc[i][j] << ", "; 
		}
		cout << ": " << picturesFromData[i]->getNameOfPicture() << endl;
	}
}

void DataManager::sortByKey()
{
	multimap<string, Picture*> sortedPictureList;

	for (auto& picture : picturesFromData)
	{
		sortedPictureList.insert(make_pair(picture->getWordKey(), picture));
	}

	for (auto& pictureList : sortedPictureList)
	{
		cout << pictureList.first << " : " << pictureList.second->getNameOfPicture() << endl;
	}
}


DataManager::~DataManager()
{
	;
}
