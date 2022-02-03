#include <iostream>

using namespace std;

struct Student{ //Student = Node
  int studentID;
  string name;
  string faculty;
  int age;
  Student *next; //points to the next node
}*head;

// struct Student *head;

class StudentArray{
public:
    StudentArray ()  {
    head = new Student;
    
  }

//4-step insertion: find, allocate, point to next, point left
void Insert(int s, string n, string f, int a){
	
	//allocates new node; 
	//Student* newStudent = Student *newStudent
	Student *newStudent = new Student; 
	
	//put new data into data "box"
	newStudent->studentID = s; 
	newStudent->name = n;
	newStudent->faculty = f;
	newStudent->age = a;
	newStudent->next = NULL; //new Node is last node
    
    Student *current = head; //if current pointer is pointing to the head
    

    //traverse Linked List till the last node until last node
    while(current->next!=NULL){
        current = current->next;
		
    }
    
	current->next = newStudent; //changes the next of last node
    
    cout << "Inserted" << endl;
}

void PrintList (){
	Student *current = head; //first node is head

    cout << "\nStudents details: " << endl;

	while(current->next != NULL){ //stops when next node is NULL
		current = current->next; //next node
        cout << "\tID: " << current->studentID << endl
             << "\tName: " << current->name << endl
             << "\tFaculty: " << current->faculty << endl
             << "\tAge: " << current->age << endl << endl;
    	}
}

//delete using key
//3-steps: find node, release memory, change pointer 
void Delete (int id){
    Student *previous, *current = head;
    bool flag = true;
    
    while(current->next != NULL){
        previous = current; //change pointer
        
        current = current->next;
        
        if(current->studentID == id){
            previous->next = current->next;
            delete current;
            flag = false;
            break;
    	}
    }

    if (flag){cout << "Not found!" << endl;}
}
  
};


int main (){
	StudentArray year1;
year1.Insert (123, "Ali", "IS", 20);
year1.Insert (456, "Omar", "IT", 20);
year1.Insert (789, "Ammar", "CS", 20);
year1.PrintList ();
//
year1.Delete(767);
year1.PrintList ();
	return 0;
}
