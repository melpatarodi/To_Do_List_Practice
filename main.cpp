#include "list.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
vector<Tasks> tasks;
bool exit = false;
char choice;

while (!exit) {
  cout << "_________TO DO LIST_________\n" << "1. Add task\n" << "2. View Tasks\n" << 
    "3. Mark completed task\n" << "4. Delete task\n" << "5. Exit\n" << "Enter a number: ";
  cin >> choice;
  switch (choice) {
    case '1':  
      addTask(tasks);
      cout << "\n";
      break;
    case '2':
      viewTasks(tasks);
      cout << "\n";
      break;
    case '3':
      completeTask(tasks);
      cout << "\n";
      break;
    case '4':
      deleteTask(tasks);
      cout << "\n";
      break;
    case '5':
      cout << "Goodbye!\n";
      cout << "\n";
      exit = true;
      break;
    default: 
      cout << "Invalid. Try again.\n";
      cout << "\n";
      break;
  }
}


return 0;
}
