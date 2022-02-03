#include <iostream>

using namespace std;

struct Staff{
	int no;
	string name;
	string faculty;
	Staff *next;
};

class StaffQueue{
	private:
	Staff *front;
	Staff *rear;
	int counter;
		
	public:
	StaffQueue(){
		front = NULL;
		rear = NULL;
		counter = 0;
	}
	
	bool isEmpty(){
		if(counter == 0)
			return true;
		else
			return false;
	}
	
	void Enqueue(int no, string name, string faculty){
		Staff *newStaff = new Staff;
		newStaff->no = no;
		newStaff->name = name;
		newStaff->faculty = faculty;
		newStaff->next = NULL;
		
	if(isEmpty()){
		front = newStaff;
		rear = newStaff;
	}
	
	else{
		rear->next = newStaff;
		rear = newStaff;
	}
	counter++;
	cout << "INSERTED" << endl;	
	}
	
	Staff* Dequeue(){
		if(isEmpty()){
			cout << "Queue is empty" << endl;
			return NULL;
		}
		else{
			Staff* staff = front;
			front = front -> next;
			counter --;
			return staff;
		}
	}
	
	void Display(){
		Staff *curr = front;
		cout << "Staff details" << endl;
		for(int i=0; i<counter; i++){
			cout << endl << "Staff: " << i+1 << endl
				 << "No.: " << curr->no << endl
				 << "Name: " << curr->name << endl
				 << "Faculty: " << curr->faculty << endl;
				 
			curr = curr->next;
		}
	}
};

int main(){
	StaffQueue a;

	if(a.isEmpty())
		cout << "Queue is empty" << endl;
	
	a.Enqueue(149,"Zulfakar","Law");
	a.Enqueue(121,"Jamal","Econs");
	a.Enqueue(772,"Kamal","CS");
	cout << endl;
	
	a.Display();
	cout << endl;
	
	Staff* dequeue = a.Dequeue();
	cout << endl << "Dequeued staff: " << endl
		 << "No.: " << dequeue->no << endl
		 << "Name: " << dequeue->name << endl
		 << "Faculty: " << dequeue->faculty << endl;
		 
	a.Display();
	
	return 0;
}
