#pragma once
#include <string>
#include <vector>

using namespace std;

typedef enum
{
	JANVIER,
	FEVRIER,
	MARS,
	AVRIL,
	MAI,
	JUIN,
	JUILLET,
	AOUT,
	SEPTEMBRE,
	OCTOBRE,
	NOVEMBRE,
	DECEMBRE
}Month;

class Date
{
private:
	const int daysPerMonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string day, month, year;

public:
	Date(string day, string month, string year);
	Date(const Date& date);

	static bool isLeap(int year);

	int getDayPerMonth(const Month month, int year) const;

	void displayDate() const;

	Date& operator=(const Date& date);

	~Date();
};

