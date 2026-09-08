#include "list.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
vector<Task> tasks;
bool exit = false;
int choice;

while (!exit) {
  cout << "_________TO DO LIST_________\n" << "1. Add task\n" << "2. View Tasks\n << 
    "3. Mark completed task\n" << "4. Delete task\n" << "5. Exit\n" << "Enter a number: ";
  cin >> choice;
  switch (choice) {
    case 1:  
      addTask(tasks);
      break;
    case 2:
      viewTasks(tasks);
      break;
    case 3:
      completeTask(tasks);
      break;
    case 4:
      deleteTask(tasks);
      break;
    case 5:
      cout << "Goodbye!\n";
      exit = true;
      break;
    default: 
      cout << "Invalid. Try again.\n";
      break;
  }
}


return 0;
}
