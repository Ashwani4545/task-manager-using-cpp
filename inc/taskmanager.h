#include<iostream>
#include <vector>
#include <memory>

using namespace std;

class task;

class TaskManager{
private:
	vector<shared_ptr<task>> myTasks;
public:
	void addTask(){
		cout<<"\n I'm in addTask()";
                string task_name;
                cout<<"\nEnter task name : ";
                cin.ignore();
                getline(cin, task_name);
		myTasks.push_back(make_shared<task>(task_name));
	}

	void displayAllTask(){
		cout<<"\n ###### In displayTasks() ######";
		for(auto ref = myTasks.begin(); ref!=myTasks.end(); ref++){
		cout<<endl<<endl<<" "<<(*ref)->getTaskId() << ", "<< (*ref)->getName() <<", ";
                
		if((*ref)->getStatus() == false)
                  cout<<"Not Completed";
         	else
		  cout<<"Completed";
		}
                cout<<endl<<endl;

	}

	void deleteTask(){
		cout<<"\n#### I'm in deleteTask()#####";
		unsigned int id;
		cout<<"\n Enter task id :";
		cin>>id;

                for(auto ref=myTasks.begin(); ref!=myTasks.end(); ref++){
			if((*ref)->getTaskId() == id){
		   	 cout<<"\n Task id found..";
                         myTasks.erase(ref);
                         break;
                         }
                 }
		
	 }

	void updateTask(){
	        cout<<"\n#### I'm in updateTask() #####";
                unsigned int id;
                cout<<"\n Enter task id :";
                cin>>id;

                for(auto ref=myTasks.begin(); ref!=myTasks.end(); ref++){
                        if((*ref)->getTaskId() == id){
                         cout<<"\n Task id found..";
                         int choice;
                         cout<<"\n enter 1 to compelte the task";
                         cout<<"\n 0 to incomlete it\n";
                         cin>>choice;
                         if(choice == 1)
				(*ref)->setStatus(true);
                         else
				(*ref)->setStatus(false);
                         break;
                         }
                 }
	}

};
