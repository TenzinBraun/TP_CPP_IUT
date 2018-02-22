#pragma once
#include <iostream>
#include <string>

using namespace std;

enum Month {
	JANUARY,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};


class Ville
{
private:
	string cityName;
	string countryName;

	int numberOfPeopleInTheCityInMillion; 

	bool isEstateOf;

	float averageTemperaturePerMonth[12];

	Month month;

public:
	Ville();

	Ville(string cityName, string countryName, int numberOfPeopleInTheCity, bool isEstateOf) {
		this->cityName = cityName;
		this->countryName =countryName;
		this->numberOfPeopleInTheCityInMillion = numberOfPeopleInTheCity;
		this->isEstateOf = isEstateOf;
		for (int i = 0; i < 12; i++) {
			averageTemperaturePerMonth[i] = 0;
		}
	}

	Ville(string cityName, string countryName) {
		this->cityName = cityName;
		this->countryName = countryName;
	}

	void displayCaracteristicOfCity()
	{
		cout << cityName;
		cout << endl;

		cout << countryName;
		cout << endl;

		cout << numberOfPeopleInTheCityInMillion << " (En Million)" << endl;

		if (isEstateOf)
			cout << "True" << endl;
		else 
			cout << "false" << endl;
	}

	void addTemperatureRelatedToMonth(Month month, float temperature) {
		averageTemperaturePerMonth[month] = temperature;
	}

	float calculateAverageTemperatureForYear() {
		float result = 0;
		for (int i = 0; i < 12; i++) {
			result += averageTemperaturePerMonth[i];
		}
		return result / 12.0;
	}



	/* Getter Setter */
	
	int getNumberOfPeopleInTheCityInMillion() { return this->numberOfPeopleInTheCityInMillion; }
	bool IsEstateOf() { return this->isEstateOf; }

	void setNumberOfPeopleInTheCityInMillion(int numberOfPeopleInTheCityInMillion)
	{ 
		if(numberOfPeopleInTheCityInMillion > 0)
			this->numberOfPeopleInTheCityInMillion = numberOfPeopleInTheCityInMillion;
		else {
			cout << "Error ! Negativ value put on the number of People";
		}
	}
	void setIsEstateOf(bool isEstateOF) {
		this->isEstateOf = isEstateOF;
	}

	~Ville();
};

