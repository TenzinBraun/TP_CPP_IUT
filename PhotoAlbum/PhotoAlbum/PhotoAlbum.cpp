// PhotoAlbum.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "PictureManager.h"
#include "DataManager.h"

using namespace std;



int main()
{
	/*Picture cat("cat", "03/07/98", 200, 400);
	Picture dog("cate", "03/07/98", 200, 400);
	Picture ara("ara", "03/07/98", 200, 400);

	PictureManager albumPhoto("Mon Album Photo");
	albumPhoto.addPicture("cat", "03/07/98", 200, 400);
	albumPhoto.addPicture("cate", "03/07/98", 200, 400);
	albumPhoto.addPicture("ara", "03/07/98", 200, 400);
	albumPhoto.sortByName();
	albumPhoto.displayElements();

	albumPhoto.addPictureKeyWord(0, "Maison");
	albumPhoto.addPictureKeyWord(1, "Bizarre");
	albumPhoto.addPictureKeyWord(2, "Amazonie");
	
	albumPhoto.sortByKey();*/

	DataManager dataManager;

	dataManager.initializePicturesFromData();
	dataManager.pairPicturesDataWithWordKey();
	dataManager.sortByKey();



    return 0;
}
