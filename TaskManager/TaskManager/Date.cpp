#include "stdafx.h"
#include "Date.h"
#include <iostream>

Date::Date(string day, string month, string year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::Date(const Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
}

bool Date::isLeap(const int year)
{
	if (year % 4 == 0)
	{
		if(year%100 == 0)
		{
			return year % 400 == 0;
		}
		return true;
	}
	return false;
}

int Date::getDayPerMonth(const Month month, int year) const
{
	if(isLeap(year) && month == 1)
	{
		return 29;
	}
	else {
		return this->daysPerMonth[month];
	}
}

void Date::displayDate() const
{
	cout << day << " " << month << " " << year;
}

Date& Date::operator=(const Date& date)
{
	this->day = date.day;
	this->month = date.month;
	this->year = date.year;
	return *this;
}

Date::~Date()
= default;
