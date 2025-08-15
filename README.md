Task Manager Application
This is a simple command-line task management application written in C++. It allows a user to perform basic CRUD (Create, Read, Update, Delete) operations on tasks. The project is organized into modular files with separate headers for classes and utilities.

🛠️ How to Build
The project includes a makefile to simplify the compilation process. You will need a C++ compiler installed on your system (e.g., g++).

Navigate to the project's root directory in your terminal.

Run the make command to compile the application:

make

This will create an executable file named taskmanager.out.

🚀 How to Run
Once the project is successfully built, you can run the executable directly from your terminal.

Execute the compiled program:

./taskmanager.out

The application will start and display a menu of options for you to interact with.

✨ Features
The application provides the following functionalities:

Add New Task: Add a new task with a name. A unique ID is automatically assigned.

Update Existing Task: Update a task's status (completed or not completed) by providing its ID.

Delete Task: Remove a task from the list by entering its ID.

Display All Tasks: View a list of all tasks, including their ID, name, and current status.

Exit: Quit the application.

🧹 Cleaning Up
To clean up the build files and remove the executable, use the clean command in the makefile.

make clean
