#include "list.h"
#include <iostream>

void addTask(vector<Tasks>& tasks){
  Tasks newTask;
  
  cout << "What task would you like to add?\n";
  cin.ignore();
  getline(cin, newTask.desc);
  newTask.finished = false;
  tasks.push_back(newTask);

  cout << "Added!\n";
}
void viewTasks(const vector<Tasks>& tasks){
  cout << "==================\n";
  if (tasks.empty()){
    cout << "There are no tasks.\n";
    return;
  }
  for (int i = 0; i < tasks.size(); i++) {
    cout << "Task " << i+1 << ": " << tasks[i].desc;
    if (tasks[i].finished == true) {
      cout << " [FINISHED]\n";
    }
  }
}

void completeTask(vector<Tasks>& tasks){
  int input;
  cout << "Enter the number of the task you completed: \n";
  cin >> input;
  tasks[input-1].finished = true;
  cout << "Task complete. \n";
}
void deleteTask(vector<Tasks>& tasks){
  int input;
  cout << "Enter the task number you want to delete: \n";
  cin >> input;
  if (input < 1 || input > tasks.size()) {
    cout << "Invalid task number.\n";
    return;
  }
  tasks.erase(tasks.begin() + (input - 1));
}
