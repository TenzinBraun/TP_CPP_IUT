#pragma once
#include "Date.h"

using namespace std;

typedef enum
{
	URGENT,
	HIGH,
	MEDIUM,
	LOW
}Priority;


class Task
{
private:
	const string priorityDescription[4] = { "Urgent","High", "Medium","Low" };
	Date date;
	string label;
	Priority priority;
	string priorityName;

public:
	Task(string label, Date date, Priority priority);
	Task(string label, Date date);

	void displayTask() const;
	int getPriority() const;
};

