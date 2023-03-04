#include <iostream>
#include <string>

class node(){

	public:
		string title;
		int number;

		node * head;
		node * next;
		node * prev;

		void set_node(string title, int number);
}


class linked_list(){

	public:
		node * head;
		node * tail;

		int node_count;

	private:
		linked_list();
		void create_new_node();
		void delete_node();
		void print_list();
		int add_to_tail(node t);

}

linked_list::linked_list(){

	this.head = 0x00;
	this.tail = 0x00;
	this.count = 0;

}



void linked_list::create_new_node(node t){

	node * child;
	child = new node;
	*child = t;
	
	child -> prev = this.tail;
	child -> next = this.head;

	
}

int linked_list::add_to_tail(node t){

	node * child;
	child = new node();
	*child = t;

	child->prev = this.tail;
	child->next = this.head;

	this.tail = &child;

	this.head->prev = this.tail;
	

	return 1;
}














