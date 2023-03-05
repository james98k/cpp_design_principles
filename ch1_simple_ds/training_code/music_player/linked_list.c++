#include <iostream>
#include "header.hpp"

Node::Node(){
	next_node = 0x0;
	prev_node = 0x0;

	title = "";
	author = "";
	length = "";
	number = 0x0;
}

void Node::set_node(string title, string author, string length){
	title = title;
	author = author;
	length = length;
};

void Node::print_node(){
	cout<<number<<"."<< title << "\t" << author<< "\t " << length;
}
void Node::set_node_number(int number){
	number = number;
}

LinkedList::LinkedList(){

	this->head = 0x0;
	this->tail = 0x0;
	count = 0;
};

void LinkedList::delete_ll(){

	while(head != 0x0){
		
	}
};

void LinkedList::delete_node(Node t){
	Node * tmp;
	tmp = &t;

	//if ll is empty;
	if(head == 0x0)
		return;
	else{
		//if ll has only one Node;
		if(head == tail){
			free(tmp);
			head = 0x0;
			tail = 0x0;
		}
		//if ll has two or more Node;
		else
			if(tmp == head)
				head = tmp->next_node;
			else if(tmp == tail)
				tail = tmp->prev_node;
			else{
				tmp->prev_node->next_node = tmp->next_node;
				tmp->next_node->prev_node = tmp->prev_node;
			}
		count--;
	};
};

void LinkedList::add_new_song(Node t){
	Node * tmp;
	tmp = &t;

	count++;
	tmp->set_node_number(count);
	
	if(head != 0x0 && tail != 0x0){
		tmp->prev_node = tail->prev_node;
		tmp->next_node = 0x0;
		tail = tmp;
		
	}
	else{
		head = tmp;
		tail = tmp;
	}
}

void LinkedList::print_list(){
	Node * tmp;
	tmp = head;

	if(tmp == head){
		tmp->print_node();
	}
	else{
		while(tmp->next_node != 0x0){
			tmp->print_node();
			tmp = tmp->next_node;
		}
	}
	
}

















