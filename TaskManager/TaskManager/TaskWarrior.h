#pragma once
#include "Task.h"
#include <vector>
#include <map>

using namespace std;

class TaskWarrior
{
private:
	vector<Task*> tasks;
	multimap<int, Task*> mapTasksPriority;
public:
	TaskWarrior();

	void addTask(string label, Date date, Priority priority);

	void completeTaskMap();
	~TaskWarrior();
};

