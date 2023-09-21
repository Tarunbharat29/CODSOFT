#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the to-do list
void displayList(const vector<string>& todoList) {
    cout << "To-Do List:" << endl;
    for (int i = 0; i < todoList.size(); i++) {
        cout << i + 1 << ". " << todoList[i] << endl;
    }
}

int main() {
    vector<string> todoList;
    char choice;

    do {
        cout << "Choose an option:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. Remove task" << endl;
        cout << "3. Display tasks" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case '1':
                {
                    string task;
                    cout << "Enter the task to add: ";
                    cin.ignore(); // Clear the newline character from the buffer
                    getline(cin, task);
                    todoList.push_back(task);
                    break;
                }
            case '2':
                {
                    int taskIndex;
                    cout << "Enter the index of the task to remove: ";
                    cin >> taskIndex;

                    if (taskIndex >= 1 && taskIndex <= todoList.size()) {
                        todoList.erase(todoList.begin() + taskIndex - 1);
                    } else {
                        cout << "Invalid index. Task not removed." << endl;
                    }

                    break;
                }
            case '3':
                displayList(todoList);
                break;
            case '4':
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != '4');

    return 0;
}
