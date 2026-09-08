#ifndef LIST_H
#define LIST_H
#include <string>
#include <vector> 
using namespace std;


struct Tasks {
string desc;
bool finished;
};

void addTask(vector<Tasks>& tasks);
void viewTasks(const vector<Tasks>& tasks);
void completeTask(vector<Tasks>& tasks);
void deleteTask(vector<Tasks>& tasks);


#endif
