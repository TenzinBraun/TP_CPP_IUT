#include "Ville.h"

int main() {

	string cityNameLyon = "Lyon";
	string countryNameFrance = "France";
	string cityNameParis = "Paris";

	Ville lyon(cityNameLyon, countryNameFrance, 2000, false);
	lyon.displayCaracteristicOfCity();

	Ville paris(cityNameParis, countryNameFrance);

	paris.setIsEstateOf(true);
	paris.setNumberOfPeopleInTheCityInMillion(10000);

	paris.displayCaracteristicOfCity();

	paris.addTemperatureRelatedToMonth(JANUARY, -5.1);
	paris.addTemperatureRelatedToMonth(FEBRUARY, 0.2);
	paris.addTemperatureRelatedToMonth(MARCH, 5.6);
	paris.addTemperatureRelatedToMonth(APRIL, 9.7);
	paris.addTemperatureRelatedToMonth(MAY, 15.6);
	paris.addTemperatureRelatedToMonth(JUNE, 22.7);
	paris.addTemperatureRelatedToMonth(JULY, 26.9);
	paris.addTemperatureRelatedToMonth(AUGUST, 26.7);
	paris.addTemperatureRelatedToMonth(SEPTEMBER, 21.3);
	paris.addTemperatureRelatedToMonth(OCTOBER, 18.5);
	paris.addTemperatureRelatedToMonth(NOVEMBER, 11.4);
	paris.addTemperatureRelatedToMonth(DECEMBER, 5.4);

	cout << paris.calculateAverageTemperatureForYear();

	system("pause");
	return EXIT_FAILURE;
}