
#include "stdafx.h"
#include "Task.h"
#include <iostream>



Task::Task(string label, Date date, Priority priority) : date(date)
{
	this->label = label;
	this->priorityName = this->priorityDescription[priority];
	this->priority = priority;
}

Task::Task(string label, Date date) : date(date), priority();
{
	this->label = label;
}

void Task::displayTask() const
{
	cout << label << endl;
	date.displayDate();
	cout << endl << "Priorite : " << priorityName <<endl;
}

int Task::getPriority() const
{
	return this->priority;
}
