#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

struct Node {
	int num;
	Node* next;
	Node(int n) : num(n), next(nullptr) {}
};

class LinkedList {

public:
	Node* head;

	LinkedList() : head(nullptr) {}
	void insert(int n) {
		Node* newNode = new Node(n);
		if (!head) {
			head = newNode;
		}
		else {
			Node* temp = head;
			while (temp->next) {
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}
	void print() {
		Node* temp = head;
		while (temp) {
			cout << temp->num;
			if (temp->next == nullptr) break;
			cout << " -> ";
			temp = temp->next;
		}
		cout << endl;
	}
	void deleteList() {
		Node* current = head;
		Node* nextNode;
		while (current != nullptr) {
			nextNode = current->next;
			delete current;
			current = nextNode;
		}
		head = nullptr;
	}
};

int  convertToNumber(LinkedList& lst) {
	Node* w = lst.head;
	int sum = 0;
	int i = 0;

	while (w != nullptr) {
		sum += w->num * pow(10, i);
		w = w->next;
		i++;
	}
	return sum;
}

void insertSum(int sum) {
	LinkedList sumList;

	while (sum > 0) {
		int digit = sum % 10;
		sumList.insert(digit);
		sum /= 10;
	}
	
	cout << "Sum Linked List: ";
	sumList.print();
	sumList.deleteList();
}



int main() {
	LinkedList list1;
	LinkedList list2;
	
	cout << "Enter numbers to insert into the linked list 1 (enter -1 to stop):" << endl;
	int num;
	while (true) {
		cin >> num;
		if (num == -1) break;
		list1.insert(num);
	}
	cout << "Linked List 1: ";
	list1.print();
	
	cout << "\nEnter numbers to insert into the linked list 2 (enter -1 to stop):" << endl;
	while (true) {
		cin >> num;
		if (num == -1) break;
		list2.insert(num);
	}
	cout << "Linked List 2: ";
	list2.print();

	int a = convertToNumber(list1);
	int b = convertToNumber(list2);
	int sum = a + b;

	list1.deleteList();
	list2.deleteList();
	cout << "\n"; 
	insertSum(sum);
	return 0;
}