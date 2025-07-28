#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Structure to represent a task
struct Task {
    string description;
    bool isCompleted;

    Task(string desc) {
        description = desc;
        isCompleted = false;
    }
};

// Function to show menu options
void showMenu() {
    cout << "\n---------- TO-DO LIST MENU ----------\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Mark Task as Completed\n";
    cout << "4. Remove Task\n";
    cout << "5. Exit\n";
    cout << "Choose an option (1-5): ";
}

int main() {
    vector<Task> todoList;
    int choice;

    do {
        showMenu();
        cin >> choice;
        cin.ignore();  // to handle newline character

        switch (choice) {
            case 1: {
                string taskDesc;
                cout << "\nEnter the task description: ";
                getline(cin, taskDesc);
                todoList.push_back(Task(taskDesc));
                cout << "Task added successfully!\n";
                break;
            }

            case 2: {
                cout << "\n---------- Your To-Do List ----------\n";
                if (todoList.empty()) {
                    cout << "No tasks found.\n";
                } else {
                    for (size_t i = 0; i < todoList.size(); ++i) {
                        cout << i + 1 << ". [" 
                             << (todoList[i].isCompleted ? "✔" : " ") 
                             << "] " << todoList[i].description << endl;
                    }
                }
                break;
            }

            case 3: {
                int taskNum;
                cout << "\nEnter the task number to mark as completed: ";
                cin >> taskNum;

                if (taskNum >= 1 && taskNum <= todoList.size()) {
                    todoList[taskNum - 1].isCompleted = true;
                    cout << "Task marked as completed!\n";
                } else {
                    cout << "Invalid task number.\n";
                }
                break;
            }

            case 4: {
                int taskNum;
                cout << "\nEnter the task number to remove: ";
                cin >> taskNum;

                if (taskNum >= 1 && taskNum <= todoList.size()) {
                    todoList.erase(todoList.begin() + taskNum - 1);
                    cout << "Task removed successfully!\n";
                } else {
                    cout << "Invalid task number.\n";
                }
                break;
            }

            case 5:
                cout << "Exiting To-Do List. Have a productive day!\n";
                break;

            default:
                cout << "Please enter a valid option (1–5).\n";
        }

    } while (choice != 5);

    return 0;
}
