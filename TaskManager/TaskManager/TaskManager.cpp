// TaskManager.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include "TaskWarrior.h"


int main()
{
	TaskWarrior taskWarrior;
	taskWarrior.addTask("Manger", Date("12", "02", "13"), LOW);
	taskWarrior.addTask("Dormir", Date("12", "02", "13"), URGENT);
	taskWarrior.addTask("Se Doucher", Date("12", "02", "13"), MEDIUM);
	taskWarrior.addTask("Faire la vaisselle", Date("12", "02", "13"), URGENT);
	taskWarrior.addTask("Regarder une serie", Date("12", "02", "13"), HIGH); 
	taskWarrior.addTask("Ranger", Date("12", "02", "13"), LOW);
	taskWarrior.completeTaskMap();

    return 0;
}

