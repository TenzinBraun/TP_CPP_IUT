#pragma once
#include <string>
using namespace std;
const int NB_IMAGES = 10;

string imageName[NB_IMAGES]= {"im1","im2","im3", "im4", "im5","im6","im7","im8", "im9", "im10"};
string date[NB_IMAGES]={"1/12/2015","12/9/2016","4/12/2015","25/7/2016","8/2/2014","25/5/2015","27/3/2016","3/3/2015","12/11/2015","24/4/2015"};
int taille[NB_IMAGES]={123,245,12,56,48,741,852,128,789,456};
string mc0[]={"bob","john","italie", "vacances"};
string mc1[]={"italie","vacances","john"};
string mc2[]={"oiseau","jaune"};
string mc3[]={"fleur","jaune","lyon", "bob"};
string mc4[]={"oiseau","rouge","italie"};
string mc5[]={"john","vacances","espagne","fleur","rouge"};
string mc6[]={"vacances","lyon","bob"};
string mc7[]={"fleur","rouge","italie"};
string mc8[]={"bob","italie"};
string mc9[]={"bob","john","italie"};
string* lmc[NB_IMAGES]={mc0,mc1,mc2,mc3,mc4,mc5,mc6,mc7,mc8,mc9};
int numberOfMCpI[NB_IMAGES]={4,3,2,4,3,5,3,3,2,3};
