#include "stdafx.h"
#include "TaskWarrior.h"
#include <algorithm>


TaskWarrior::TaskWarrior()
= default;

void TaskWarrior::addTask(string label, Date date, Priority priority)
{
	tasks.push_back(new Task(label, date, priority));
}

void TaskWarrior::completeTaskMap()
{
	for (auto task : tasks)
	{
		mapTasksPriority.insert(make_pair(task->getPriority(), task));
	}
	for(const auto mapTask : mapTasksPriority)
	{
		(mapTask.second)->displayTask();
	}
}


TaskWarrior::~TaskWarrior()
= default;
